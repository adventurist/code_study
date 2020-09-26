#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> runtime_args(int argc, char** argv) {
  try {
    std::vector<std::string> params{argv, argv + argc};
    return params;
  } catch (const std::exception& e) {
    std::cout << "Error parsing arguments: \n" << e.what() << std::endl;
    throw e;
  }
}

int main(int argc, char** argv) {
  auto params = runtime_args(argc, argv);
  for (const auto& param : params) {
    for (auto i = 0; i < param.size(); i++) {
      std::cout << params.data()[i] << std::endl;
    }
    std::cout << "Next\n" << std::endl;
  }

  return 0;
}
