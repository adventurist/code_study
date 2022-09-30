#include "tools.hpp"

using promise_t = std::promise<void>;
using future_t  = std::future<void>;

int main(int argc, char* argv[])
{
  promise_t promise;
  future_t  future = promise.get_future();

  std::thread([](promise_t p)
  {
    while (!work_status()) ; // poll
    p.set_value();
  }, std::move(promise)).detach();

  work();
  check_work();

  future.wait();
  check_work();

  return 0;
}