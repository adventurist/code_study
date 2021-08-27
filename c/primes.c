#include <stdio.h>
#include <string.h>

void Primes(int num) {
  char result[5] = {"true"};

  for (int i = 2; i < num; i++)
    if ((num % i) == 0 && (i != num))
      strcpy(result, "false");

  printf("%s", result);
}

int main(void) 
{
  Primes(37);
  return 0;
}
