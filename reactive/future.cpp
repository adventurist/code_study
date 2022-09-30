#include "tools.hpp"

int main(int argc, char* argv[])
{
  std::future<void> future = std::async(std::launch::deferred,[] { while (!work_status()) ; });

  check_work();
  work();
  future.wait();
  check_work();

  return 0;
}