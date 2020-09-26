#include <iostream>
#include <memory>
#include <neither/either.hpp>
#include <string>
#include <vector>

using namespace neither;

std::shared_ptr<uint8_t[]> getData() {
  auto s_ptr = std::shared_ptr<uint8_t[]>(new uint8_t[400]);

  return s_ptr;
}

Either<std::vector<std::string>, std::string> getEither(
    std::shared_ptr<uint8_t[]> p) {
  if (sizeof(p) < 0) {
    std::cout << "Returning left string" << std::endl;
    return right(std::string("You bitchass"));
  } else {
    std::cout << "Returning right" << std::endl;
    std::vector<std::string> sv{"one string", "two string"};
    return left(std::move(sv));
  }
}

int main(int argc, char** argv) {
  auto p = getData();
  auto either = getEither(p);

  return 0;
}
