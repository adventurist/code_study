#include <iostream>
#include <string>

class Animal {
 protected:
  std::string m_name;

  Animal(std::string name) : m_name(name) {}

 public:
  std::string getName() { return m_name; }
  virtual const char* speak() { return "???"; }
};

class Cat : public Animal {
 public:
  Cat(std::string name) : Animal(name) {}
  virtual const char* speak() { return "Meow"; }
};

class Dog : public Animal {
 public:
  Dog(std::string name) : Animal(name) {}
  virtual const char* speak() { return "Woof!"; }
};

void report(Animal& animal) {
  std::cout << animal.getName() << " says " << animal.speak() << std::endl;
}

int main() {
  Cat cat("Felix");
  Dog dog("Buster");

  report(cat);
  report(dog);

  return 0;
}
