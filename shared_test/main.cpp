#include <iostream>
#include <memory>

class Something {
 public:
  Something(std::shared_ptr<char[]> ptr) : m_ptr(ptr) {}

 private:
  std::shared_ptr<char[]> m_ptr;
};

int main(int argc, char** argv) {
  std::shared_ptr<char[]> s_ptr(new char[5000]);
  Something something{s_ptr};

  std::cout << "We made it this far" << std::endl;

  return 0;
}
