#include <iostream>
#include <string>
#include <vector>

std::string utf8{u8"🙋‍♀️🙋‍♀️"};

int main(int argc, char** argv) {
  std::vector<uint8_t> v{utf8.c_str(), utf8.c_str() + utf8.size()};

  for (const auto& i : v) {
    std::cout << i;
  }
  std::cout << std::endl;

  return 0;
}
