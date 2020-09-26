#include <iostream>
#include <vector>

class A {
  public:

    A() {
      v = std::vector<int>{1};
      buf = new int[5]{1,2,3,4,5};
    }

    int&& get() {
      return (std::move(*v.data()));
    }

    int&& getint() {
      return std::move(*buf);
    }

    void check() {
      std::cout << v.data() << std::endl;
    }

    void checkint() {
      std::cout << buf << std::endl;
    }

  private:
  std::vector<int> v;
  int* buf;
};

int main(int argc, char** argv) {
  A a{};

  a.check();

  auto&& value = a.get();

  std::cout << &value << std::endl;

  a.check();

  std::cout << "\n\nSecondTest\n\n" << std::endl;

  a.checkint();

  auto&& intvalue = a.getint();

  std::cout << &intvalue << std::endl;

  a.checkint();

  return 0;
}

