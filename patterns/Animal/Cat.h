#include <iostream>
#include "Animal.h"

class Cat : public Animal {
  public:
    void speak () {
      this->meow();
    }

  private:
    void meow () {
      std::cout << "Meow!" << std::endl;
    };

};