#include <stdio.h>
#include <string.h>

void ThreePoints(char * strArr[], int arrLength) {
  char          result[8];
  int           coordinates[6];
  int           coord_index = 0,
                negative    = 0,
                a_x         = 0,
                b_x         = 2,
                c_x         = 4;

  for (int i =0; i < arrLength; i++)
  {
    for (int j = 1; strArr[i][j] != ')'; j++)
    {
      char c = strArr[i][j];

      if (c != ',' && c !='(') // action required
      {
        if (c == '-')
        {
          negative = 1;        // use on next iter
          continue;
        }

        int v = (negative) ?
                  (0 - (int)(c - '0')) :
                  (int)(c - '0');
        coordinates[coord_index++] = v;
        if (negative)
          negative = 0;         // reset negative
      }
    }
  }

  int highest_x      = (coordinates[a_x] > coordinates[b_x]) ?
                         coordinates[a_x] : coordinates[b_x];
  int c_x_is_greater = (coordinates[c_x] > highest_x);

  if (c_x_is_greater)
    strcpy(result, "right");
  else
  {
    (coordinates[c_x] == highest_x && coordinates[a_x] == coordinates[b_x]) ?
      strcpy(result, "neither") :
      (coordinates[c_x] < coordinates[a_x] || coordinates[c_x] < coordinates[b_x]) ?
        strcpy(result, "left") :
        strcpy(result, "right");
  }

  printf("%s", result);
}

int main(void) {
  char * A[] = {"(0,-3)", "(-2,0)", "(0,0)"};
  int arrLength = sizeof(A) / sizeof(*A);
  ThreePoints(A, arrLength);
  return 0;
}