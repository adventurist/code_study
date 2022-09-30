#include <iostream>
#include <type_traits>

static const int A = 1;
static const int B = 2;

template <int DV>
void run()
{
  if constexpr (DV == A)
    std::cout << "A" << std::endl;
  else
  if constexpr (DV == B)
    std::cout << "B" << std::endl;
}

int main(int argc, char* argv[])
{
  run<A>();
  return 0;
}
