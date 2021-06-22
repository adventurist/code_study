#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int nums[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    char buf[11], output[41];

    scanf("%s", &buf[0]);

    for (int i = 0; i < 10; i++)
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
    }

    for (int i = 0; i < 10; i++)
    {
      int value = nums[i];
      output[(4 * i)]     = (char)((int) '0' + i);
      output[(4 * i) + 1] = (char)(' ');
      output[(4 * i) + 2] = (char)((value) ? ((int) '0' + value) : '0');
      output[(4 * i) + 3] = (char)(' ');
    }

    output[40] = '\0';

    printf("%s", output);

    return 0;
}
