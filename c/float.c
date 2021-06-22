#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

/**
Your task is to take two numbers of int data type, two numbers of float data type as input and output their sum:

1. Declare  variables: two of type int and two of type float.
2. Read  lines of input from stdin (according to the sequence
   given in the 'Input Format' section below) and initialize your  variables.
3. Use the  and  operator to perform the following operations:
- Print the sum and difference of two int variable on a new line.
- Print the sum and difference of two float variable rounded to one decimal place on a new line.
*/

    int a, b;
    float x, y;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%f", &x);
    scanf("%f", &y);

    printf("%d", a + b);
    printf(" %d\n", a - b);

    printf("%+.1f", x + y);
    printf(" %+.1f\n", x - y);

    return 0;
}
