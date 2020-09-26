#include <iostream>
#include <functional>
#include <type_traits>

struct O {
  int member;
  O() : member(5) {}
  O(O&& o) {
    member = std::move(o.member);
  }
  O(const O& o) {
    member = o.member;
  }
};

using L = std::function<void()>;
struct FuncHolder {
L fn;

FuncHolder(L f) : fn(f) {}

FuncHolder(const FuncHolder& f) {
  fn = f.fn;
}

FuncHolder(FuncHolder&& f) {
  fn = std::move(f.fn);
}

FuncHolder &operator=(const FuncHolder& fh) {
  fn = fh.fn;
  return *this;
}

FuncHolder &operator=(FuncHolder&& fh) {
  fn = std::move(fh.fn);
  return *this;
}

};


int main() {
  O o1{};
  O o2{};
  auto lfunc1 = [o1]() {
    std::cout << o1.member << std::endl;
  };

  auto lfunc2 = [&o2]() {
    std::cout << o2.member << std::endl;
  };

  FuncHolder holder1{lfunc1};
  FuncHolder holder2{lfunc2};

  FuncHolder copied_holder = holder1;
  FuncHolder moved_holder = std::move(holder2);
  return 0;
}
