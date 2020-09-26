#include <iostream>
#include <string>
#include <vector>

std::vector<int> v{1};

size_t num = 1;

int main() {
  auto begin_is_end = (v.begin() == v.end());

  std::cout << std::to_string(begin_is_end) << std::endl;
  return 0;
}
