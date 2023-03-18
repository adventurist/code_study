#include <future>
#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

auto sleep = [] { std::this_thread::sleep_for(std::chrono::seconds(1)); };
class application
{
private:
std::mutex              m;
std::condition_variable cv;
bool                    f1_done = false;
bool                    f2_done = false;
bool                    handled = false;
bool                    waiting = false;
std::future<void>       f;

//--------------------------------------
void f2(std::promise<void>&& p)
{
  std::cout << "f2" << std::endl;
    {
      sleep();
      std::unique_lock lock{m};
      cv.wait(lock, [this] { return waiting; });
      f2_done = true;
    }

    std::cout << "Setting value" << std::endl;
    cv.notify_one();
    p.set_value();
}
//--------------------------------------
void f1(std::promise<void>&& p)
{
  std::cout << "f1" << std::endl;
  std::thread{[this] (auto&& p) { wait_promise(std::move(p)); } , std::move(p)}.detach();

  {
    std::unique_lock lock{m};
    f1_done = true;
  }
  cv.notify_one();
}
//--------------------------------------
void wait_promise(std::promise<void>&& p)
{
  std::cout << "wait promise" << std::endl;
  std::thread{[this] {
    {
      std::unique_lock lock{m};
      sleep();
      waiting = true;
      cv.wait(lock, [this] { return f1_done; });
    }
  }}.detach();

  f2(std::move(p));
  cv.notify_one();
}
//--------------------------------------
void handle(std::future<void>& f)
{
  std::cout << "handle" << std::endl;
  {
    std::unique_lock lock{m};
    cv.wait(lock, [this, &f]
    {
      bool ready = (f1_done && f2_done);
      return ready && f.valid() && f.wait_for(std::chrono::seconds(0)) == std::future_status::ready;
    });
    handled = true;
  }
  f.get();
}

public:
  application(std::promise<void>&& p)
  {
    f = p.get_future();
    std::thread{[this, &p] { f1(std::move(p)); }}.detach();
    handle(f);
  }

  bool promise_is_handled() const
  {
    return handled;
  }

};
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
int main(int argc, char* argv[])
{
  application app{std::promise<void>{}};
  return 0;
}
