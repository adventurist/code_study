#include "amazon.hpp"

int main(int argc, char* argv[])
{
  amazon::Amazon amazon{};
  amazon.Login();

  return 0;
}