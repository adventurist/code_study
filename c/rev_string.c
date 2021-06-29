#include <stdio.h>
#include <string.h>

void reverse_string(char* str) {
  size_t length = strlen(str);
  char s_copy[length];
  strcpy(s_copy, str);

  char* end_ptr = (s_copy + (length - 1));
  for (int i = 0; s_copy[i] != end_ptr[0]; i++)
  {
    char tmp = s_copy[i];
    s_copy[i] = end_ptr[0];
    end_ptr[0] = tmp;
    end_ptr--;
  }
  printf("%s", s_copy);

}

int main(void) {
  reverse_string("myString");
  return 0;

}
