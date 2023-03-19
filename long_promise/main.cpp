#include <future>
#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

//--------------utils----------------------------------------------------
template<typename ...Args>
void log(Args... args) { for (auto arg : { args... }) std::cout << arg; std::cout << std::endl; };
auto sleep = [] { std::this_thread::sleep_for(std::chrono::seconds(1)); };
//-----------------------------------------------------------------------
class application
{
private:
  std::future<void>       f;
  std::mutex              m;
  std::condition_variable cv;
  std::thread             t1;
  std::thread             t2;
  std::thread             t3;
  std::thread             t4;
  bool                    f1_done = false;
  bool                    f2_done = false;
  bool                    handled = false;
  bool                    waiting = false;

  //--------------------------------------
  void f1(std::promise<void>&& p) // work function 1
  {
    log("f1()          ::thread 1");
    t2 = std::thread{[this] (auto&& p) { wait_promise(std::move(p)); } , std::move(p)};

    {
      log("f1()          ::thread 2    => setting f1 done");
      std::unique_lock lock{m};
      f1_done = true;
    }
    cv.notify_one();
  }
  //--------------------------------------
  void f2(std::promise<void>&& p) // work function 2
  {
    log("f2()          ::thread 2");
    t4 = std::thread{[this](std::promise<void>&& p)
    {
      {
        sleep();
        log("f2()          ::thread 4    => Waiting for wait_promise::thread 3 to set promise to wait");
        std::unique_lock lock{m};
        cv.wait(lock, [this] { return waiting; });
        f2_done = true;
        log("f2()          ::thread 4    => Setting value");
        cv.notify_one();
        p.set_value();
      }
    }, std::move(p)};
  }
  //--------------------------------------
  void wait_promise(std::promise<void>&& p)
  {
    log("wait_promise()::thread 2");
    t3 = std::thread{[this]
    {
      {
        log("wait_promise()::thread 3    => Waiting for f1()::thread 2 to complete");
        std::unique_lock lock{m};
        sleep();
        waiting = true;
        cv.wait(lock, [this] { return f1_done; });
      }
    }};
    log("wait_promise()::thread 2    => sending promise to f2()");
    f2(std::move(p));
    cv.notify_one();
  }
  //--------------------------------------
  void handle(std::future<void>& f)
  {
    log("handle()      ::main thread => Waiting for future to become ready");
    {
      std::unique_lock lock{m};
      cv.wait(lock, [this, &f]
      {
        bool ready = (f1_done && f2_done);
        return ready && f.valid() && f.wait_for(std::chrono::seconds(0)) == std::future_status::ready;
      });
      handled = true;
    }
    log("handle()      ::main thread => Getting future");
    f.get();
  }

public:
  //--------------------------------------
  application(std::promise<void>&& p) // ctor
  {
    f = p.get_future();
    t1 = std::thread{[this, &p] { f1(std::move(p)); }};
    handle(f);
  }
  //--------------------------------------
  ~application()                      // dtor
  {
    if (t1.joinable()) t1.join();
    if (t2.joinable()) t2.join();
    if (t3.joinable()) t3.join();
    if (t4.joinable()) t4.join();
  }
}; // application

//----------------------------------------------------------------------------
//--MAIN----------------------------------------------------------------------
//----------------------------------------------------------------------------
int main(int argc, char* argv[])
{
  application app{std::promise<void>{}};
  return 0;
}
