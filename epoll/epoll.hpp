#include <sys/epoll.h>
#include <sys/wait.h>
#include <unistd.h>

#include <iostream>
#include <string>
#include <vector>

#define STDOUT STDOUT_FILENO
#define STDERR STDERR_FILENO

struct ProcessResult {
  std::string output;
  bool error = false;
};

const uint32_t BUF_SIZE = 32768;
const uint8_t EVENT_COUNT = 2;

std::string readFd(int fd) {
  char buffer[32768];
  std::string s{};
  do {
    const ssize_t r = read(fd, buffer, BUF_SIZE);
    if (r > 0) {
      s.append(buffer, r);
    }
  } while (errno == EAGAIN || errno == EINTR);
  return s;
}

ProcessResult qx(std::vector<std::string> args) {
  struct epoll_event stdout_event, stderr_event, epoll_events[2];
  int epoll_fd = epoll_create1(0);

  if (epoll_fd == -1) {
    fprintf(stderr, "Failed to create epoll file descriptor\n");
    throw std::logic_error{"Failed to create epoll"};
  }

  int stdout_fds[2]
  , stderr_fds[2]
  ;
  pipe(stdout_fds);
  auto pipe_result = pipe(stderr_fds);

  if (pipe_result == -1) {
    std::cout << "We have an issue with the pipe" << std::endl;
  }

  ProcessResult result{};  // To gather result

  const pid_t pid = fork();

  if (!pid) {  // Child process
    while ((dup2(stdout_fds[0], STDOUT) == -1) && (errno == EINTR)) {
      ;
    }
    close(stdout_fds[1]);
    close(stdout_fds[0]);
    // close(stderr_fds[0]);
    // dup2(stderr_fds[1], 2);
    // close(stderr_fds[1]);

    std::vector<char*> process_arguments{};
    process_arguments.reserve(args.size() + 1);

    for (size_t i = 0; i < args.size(); ++i) {
      process_arguments[i] = const_cast<char*>(args[i].c_str());
    }
    // Execute
    execvp(process_arguments[0], &process_arguments[0]);
    exit(0);  // Exit with no error
  }

  close(stdout_fds[1]);
  stdout_event.events = EPOLLOUT | EPOLLEXCLUSIVE | EPOLLHUP | EPOLLERR | EPOLLET;
    stdout_event.data.fd = stdout_fds[0];
    // stderr_event.events = EPOLLOUT;
    // stderr_event.data.fd = stderr_fds[0];
    // close(stdout_fds[1]);
    auto add_stdout_result =
        epoll_ctl(epoll_fd, EPOLL_CTL_ADD, stdout_event.data.fd, &stdout_event);  // Works
    // auto add_stderr_result =
    //     epoll_ctl(epoll_fd, EPOLL_CTL_ADD, 0, &stderr_event);  // Error
    // epoll_ctl(epoll_fd, EPOLL_CTL_DEL,stdout_event.data.fd, &stdout_event);


    if (add_stdout_result != 0
    // || add_stderr_result != 0
    ) {
      std::cout
          << "Unable to add both file descriptors for polling of forked process"
          << std::endl;
      std::cout << "errno is " << errno << std::endl;  // Is always 17
    }

    uint8_t num_of_events = 0;

    char read_buffer[BUF_SIZE];

    for (;;) {
      num_of_events = epoll_wait(epoll_fd, epoll_events, 1, 30000);

      for (int i = 0; i < num_of_events; i++) {
        std::string process_output = readFd(epoll_events[i].data.fd);

        std::cout << "Output: \n" << process_output << std::endl;

        if (process_output.size() > 0) {
          break;
        }
      }
    }

  close(stdout_fds[0]);
  close(stderr_fds[0]);
  close(stderr_fds[1]);

  return result;
}
