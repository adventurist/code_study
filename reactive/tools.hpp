#include <future>
#include <cstdio>
#include <thread>
#include <chrono>
#include <condition_variable>

std::condition_variable sv;

namespace
{
  bool global_completed_value = false;
} // ns

bool work_status()
{
  return global_completed_value;
}

void sleep()
{
  std::this_thread::sleep_for(std::chrono::milliseconds(200));
}

void work()
{
  std::thread{[]
  {
    for (int i = 0; i < 10; i++)
      sleep();
    global_completed_value = true;
    sv.notify_one();
  }}.detach();
}

void check_work()
{
  printf("Work status: %d\n", work_status());
}
