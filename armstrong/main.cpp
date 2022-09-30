#include <iostream>
#include <vector>

void print_number(int n)
{
  if (n < 0) throw std::invalid_argument{"No negatives, asshole"};

  int              original = n;
  int              total    = 0;
  std::vector<int> digits    {};

  for (int i = 0; n > 0; i++)
  {
    int temp = (n) ? n%10 : 0;
    n /= 10;
    digits.push_back(temp);
  }

  for (int digit : digits)
    if (digit)
    {
      int x{digit};
      for (int i = 1; i < digits.size(); i++) x *= digit;
      total += x;
    }

  if (total == original)
    std::cout << "Armstrong would be so proud!" << std::endl;
  else
    std::cout << "Armstrong thinks you're a pussy ass faggot bitch" << std::endl;
}

int main(int argc, char** argv)

{
  print_number(153);
  print_number(371);
  print_number(407);
  print_number(8208);
  print_number(9474);
  return 0;
}
