#include <stdio.h>
#include <string.h>

void BinaryConverter(char* str) {
  int value = 0;
  size_t length = strlen(str);
  char s_copy[length];
  strcpy(s_copy, str);

  for (int i = (length - 1); i >= 0; i--)
  {
    int bit = (int)(s_copy[length - (i + 1)]) - '0';
    if (bit > 0)
    {
      value |= (0x01 << i);
    }
  }

  sprintf(s_copy, "%d", value);

  printf("%s", s_copy);

}

int main(void) {
  BinaryConverter("1111");
  return 0;

}
