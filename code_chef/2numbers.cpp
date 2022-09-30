#include <iostream>

int main(int argc, char* argv[])
{
  int a, b;
  scanf("%d", &a);
  scanf("%d", &b);

  while (a <= b)
  {
    if (a % 2)
      std::cout << a << ' ';
    a++;
  }

  return 0;
}