#include <execinfo.h>

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <stdexcept>

#define MAX_BT_ELEMENTS 20
static bool g_bool = false;

void custom_terminate() {
  try {
    if (true) {
      std::cout << "Increment still false" << std::endl;
      throw;
    } else {
      std::cout << "Increment was true" << std::endl;
    }
  } catch (const std::exception &except) {
    std::cout << "Unhandled Exception: " << except.what() << std::endl;
  } catch (...) {
    std::cout << "Unknown Exception occurred" << std::endl;
  }
  std::cout << "Stack Trace:" << std::endl;
  void *trace_elements[MAX_BT_ELEMENTS];
  int num_trace_elements = backtrace(trace_elements, MAX_BT_ELEMENTS);
  char **bt_symbols = backtrace_symbols(trace_elements, num_trace_elements);

  for (int i = 0; i < num_trace_elements; ++i) {
    std::cout << "#" << i << ":" << bt_symbols[i] << std::endl;
  }
  free(bt_symbols);

  exit(1);
}

int main() {
  std::set_terminate(custom_terminate);

  std::cout << "Main" << std::endl;

  throw std::runtime_error("Custom runtime exception!");

  return 0;
}
