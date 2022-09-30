#include "tools.hpp"
#include <thread>

using mutex_t     = std::mutex;
using lock_t      = std::unique_lock<mutex_t>;
using condition_t = std::condition_variable;

void wait_for_work()
{
  mutex_t     mutex;
  lock_t      lock{mutex};

  sv.wait(lock, [] { return work_status(); });
}

int main(int argc, char* argv[])
{

  check_work();
  work();
  wait_for_work();
  check_work();

  return 0;
}