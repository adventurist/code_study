#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    char const delim[1] = " ";
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    char* token = strsep(&s, " ");
    while (1)
    {
      printf("%s", token);
      token = strsep(&s, " ");
      if (token != NULL)
        printf("\n");
      else
        break;
    }
    return 0;
}