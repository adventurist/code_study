#include <chrono>
#include <ctime>
#include <iostream>

int main() {
  const auto p0 = std::chrono::time_point<std::chrono::system_clock>{};
  const auto p1 = std::chrono::system_clock::now();

  std::cout << std::chrono::duration_cast<std::chrono::seconds>(
                   p1.time_since_epoch())
                   .count()
            << std::endl;

  return 0;
}
