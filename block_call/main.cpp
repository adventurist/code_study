#include <iostream>
#include <thread>
#include <future>

auto do_work = [](auto promise)
{
  for (int i = 0; i < 10; i++)
    std::this_thread::sleep_for(std::chrono::milliseconds(80));
  promise.set_value(42);
};

int main ()
{
  std::promise<int> p;
  std::future <int> f = p.get_future();                      // Future stays here

  std::thread t(do_work, std::move(p));                      // Send promise to another thread

  f.wait();                                                  // Call anytime

  std::cout << "Value is " <<  f.get() << std::endl;

  t.join();

  return 0;
}
