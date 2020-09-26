#include <functional>
#include <future>
#include <iostream>
#include <string>
#include <string_view>

#include "execxx.hpp"

namespace Executor {

enum ExecutionRequestType { IMMEDIATE = 0, SCHEDULED = 1 };

/** Function Types */
typedef std::function<void(std::string)> ProcessEventCallback;
/** Manager Interface */
class ProcessManager {
 public:
  virtual void request(std::string_view path,
                       std::vector<std::string> argv) = 0;

  virtual void setEventCallback(ProcessEventCallback callback_function) = 0;

  virtual void notifyProcessEvent(std::string status, int mask, int client_id,
                                  bool error) = 0;
};

const char *findWorkDir(std::string_view path) {
  return path.substr(0, path.find_last_of("/")).data();
}

/** Impl */
ProcessResult run_(std::string_view path, std::vector<std::string> argv) {
  std::vector<std::string> v_args{};
  v_args.push_back(std::string(path));
  for (const auto &arg : argv) {
    v_args.push_back(arg);
  }

  const char *executable_path = path.data();

  std::string work_dir{findWorkDir(path)};

  /* qx wraps calls to fork() and exec() */
  return qx(v_args);
}
/** Process Executor - implements Manager interface */
class ProcessExecutor : public ProcessManager {
 public:
  /** Daemon to run process */
  class ProcessDaemon {
   public:
    /** Constructor/Destructor */
    ProcessDaemon(std::string_view path, std::vector<std::string> argv)
        : m_path(std::move(path)), m_argv(std::move(argv)) {}
    ~ProcessDaemon(){/* Clean up */};
    /** Disable copying */
    ProcessDaemon(const ProcessDaemon &) = delete;
    ProcessDaemon(ProcessDaemon &&) = delete;
    ProcessDaemon &operator=(const ProcessDaemon &) = delete;
    ProcessDaemon &operator=(ProcessDaemon &&) = delete;

    /** Uses async and future to call implementation*/
    ProcessResult run() {
      std::future<ProcessResult> result_future =
          std::async(std::launch::async, &run_, m_path, m_argv);
      return result_future.get();
    }

   private:
    std::string_view m_path;
    std::vector<std::string> m_argv;
  };
  /** Constructor / Destructor */
  ProcessExecutor() {}
  ~ProcessExecutor() {
    std::cout << "Executor destroyed"
              << std::endl; /* Kill processes? Log for processes? */
  }
  /** Disable copying */
  ProcessExecutor(const ProcessExecutor &e) : m_callback(e.m_callback) {}
  ProcessExecutor(ProcessExecutor &&e) : m_callback(e.m_callback) {
    e.m_callback = nullptr;
  }

  ProcessExecutor &operator=(const ProcessExecutor &e) {
    this->m_callback = nullptr;
    this->m_callback = e.m_callback;
    return *this;
  };

  ProcessExecutor &operator=(ProcessExecutor &&e) {
    if (&e != this) {
      m_callback = e.m_callback;
      e.m_callback = nullptr;
    }
    return *this;
  }
  /** Set the callback */
  virtual void setEventCallback(ProcessEventCallback f) override {
    m_callback = f;
  }
  /** Callback to be used upon process completion */
  virtual void notifyProcessEvent(std::string status, int mask,
                                  int client_socket_fd, bool error) override {
    m_callback(status);
  }

  /* Request execution of an anonymous task */
  virtual void request(std::string_view path,
                       std::vector<std::string> argv) override {
    if (path[0] != '\0') {
      ProcessDaemon *pd_ptr = new ProcessDaemon(path, argv);
      auto result = pd_ptr->run();
      if (!result.output.empty()) {
        if (result.error) {
          std::cout << "Error running process" << std::endl;
        }
        m_callback(result.output);
      }
      delete pd_ptr;
    }
  }

 private:
  ProcessEventCallback m_callback;
};
}  // namespace Executor
