#include "tools.hpp"

auto wait_for_work_to_complete = [] { while (!work_status()) ; };

int main(int argc, char* argv[])
{
  check_work();
  work();
  wait_for_work_to_complete();
  check_work();

  return 0;
}