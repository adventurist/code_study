#include <iostream>

#include "distant.pb.h"

int main(int argc, char** argv) {
  distant::Operation op_msg{};

  std::cout << op_msg.has_custom_message() << std::endl;

  return 0;
}
