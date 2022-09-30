#include <iostream>

void test()
{
  int limit = 5;
  int i = 0;
  while (true)
  {
    if (i++ + 1 == 5)
    {
      std::cout << i << std::endl;
      std::cout << "leaving" << std::endl;
      break;
    }
    std::cout << i << std::endl;
  }
}

int main()
{
  test();
  return 0;
}
