#include <iostream>

class SubSystemA {
 public:
  void subOperation() { std::cout << "SubSystem A method" << std::endl; }
};

class SubSystemB {
 public:
  void subOperation() { std::cout << "SubSystem B method" << std::endl; }
};

class SubSystemC {
 public:
  void subOperation() { std::cout << "SubSystem C method" << std::endl; }
};

class Facade : public SubSystemA, public SubSystemB, public SubSystemC {
 public:
  void operation1() {
    m_sub_system_a.subOperation();
    m_sub_system_b.subOperation();
  }

  void operation2() { m_sub_system_c.subOperation(); }

 private:
  SubSystemA m_sub_system_a{};
  SubSystemB m_sub_system_b{};
  SubSystemC m_sub_system_c{};
};

int main() {
  Facade facade{};

  int choice = 1;

  while (choice != 0) {
    // Render instructions
    std::cout
        << "***********************\n"
        << "Enter 1 for Operation 1\nEnter 2 for Operation 2\nEnter 0 to exit\n"
        << "***********************\n"
        << std::endl;
    // Get user input
    std::cin >> choice;

    if (choice == 1) {
      facade.operation1();
    }
    if (choice == 2) {
      facade.operation2();
    }
  }

  return 0;
}
