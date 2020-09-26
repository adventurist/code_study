#include <iostream>
#include <string>

#include "execxx.hpp"

const char* findWorkDir(std::string_view path) {
  return path.substr(0, path.find_last_of("/")).data();
}

void run_process() {
  std::string path{"/data/c/kserver/config/execute_script.sh"};
  const char* work_dir = findWorkDir(path);
  std::vector<std::string> args{path.c_str()};
  args.push_back("46");
  std::string result = qx(args, work_dir);
  std::cout << result << std::endl;
}

int main(int argc, char** argv) {
  run_process();
  return 0;
}
