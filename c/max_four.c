#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

 int max_of_four(int a, int b, int c, int d)
{
  int max = (a > b) ? a : b;
  max = (max > c) ? max : c;
  max = (max > d) ? max : d;

  return max;
}

int main()
{
    int max = max_of_four(5, 7, 9, 11);

    printf("\n%d\n", max);

    return 0;
}
