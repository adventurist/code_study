#include <iostream>

int func() { return 3; }

int func2() { return 2; }
struct _wrapload {
  int (*fn)();
} WRAP_LOAD[] = {{func}};

int main(int argc, char** argv) {
  auto wrapped = WRAP_LOAD[0].fn();
  std::cout << wrapped << std::endl;

  return 0;
}
