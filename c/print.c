#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char c;
    char s[40];

    scanf("%c", &c);
    printf("%c\n", c);

    scanf("%s", &s);
    printf("%s", s);

    scanf("\n%39[^\n]", &s);
    printf("%s", s);

    return 0;
}
