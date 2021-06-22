#include <stdio.h>
#include <stdlib.h>

int main()
{

    int  nums[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int  i        = 0;
    char buf[1001];


    scanf("%s", &buf[0]);

    while (buf[i] != '\0')
    {
      for (int j = 0; j < 10; j++)
      {
        int v = (int)(buf[i] - '0');
        if (v == j)
        {
          nums[j]++;
          break;
        }
      }
      i++;
    }

    for (i = 0; i < 10; i++)
      printf("%d ", nums[i]);

    return 0;
}
