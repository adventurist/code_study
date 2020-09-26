#include <iostream>

int main() {
  uint32_t n = 0b0100111000111010101000001000;
  size_t si = sizeof(n);
  std::cout << "size: " << si << std::endl;
}

