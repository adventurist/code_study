#include <epoll.hpp>

int main(int argc, char** argv) {
  auto result = qx({"test_application.sh"});

  std::cout << "Result is: " << result.output << std::endl;

  return 0;
}
