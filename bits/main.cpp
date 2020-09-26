#include <iostream>
#include <string>
#define LED_PIN (3)
#define value (0x01 << (8 * 2))

void print(const char* title, int number) {
  std::cout << title << " : " << number << std::endl;
}

int main() {
  print("LED", LED_PIN);

  return 0;
}
