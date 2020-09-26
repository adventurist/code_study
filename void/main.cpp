#include <iostream>
#include <vector>

std::vector<unsigned char> something() {
  //
  if (1 > 2) {
    return std::vector<unsigned char>{};
  }
}

int main() {
  std::vector<unsigned char> data = something();

  std::cout << data.empty() << std::endl;

  return 0;
}

