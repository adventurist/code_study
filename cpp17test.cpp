#include <iostream>
#include <string_view>

void foo(std::string_view s) { std::cout << s << std::endl; }
int main() {
  foo("This is my string");

  return 0;
}
