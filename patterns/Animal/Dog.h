#include <iostream>
#include "Animal.h"

class Dog : public Animal {
  public:
    void speak () {
      this->bark();
    }

  private:
    void bark () {
      std::cout << "Woof!" << std::endl;
    };

};