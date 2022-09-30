#include <type_traits>
#include <string>
#include <iostream>

int main()
{

  bool is_same = std::is_same<std::decay_t<std::string>, const char*>::value;

  std::cout << is_same << std::endl;


}
