#include <chrono>
#include <ctime>
#include <iostream>

int main()
{
  std::time_t start = std::time(nullptr);
  volatile double d = 1.0;

  // some time-consuming operation
  for (int p=0; p<10000; ++p) {
      for (int q=0; q<100000; ++q) {
          d = d+p*d*q+d;
      }
  }

  std::time_t fresh = std::time(nullptr);

  std::cout << "Wall time passed: "
            << std::difftime(std::time(nullptr), start) << " s.\n";

  std::cout << "Reversed: "
            << std::difftime(start, std::time(nullptr)) << " s.\n";

  return 0;
}
