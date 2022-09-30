#include <cassert>
#include <iostream>
#include <type_traits>
#include <functional>

struct foo {
  template <typename F>
  foo(F f) {
    assert(42 == f(42));
  }
};

class A {
  public:
    template <typename T>
    T run(T t, size_t size) {
      return t;
    }
};


template<typename>
struct S;

template<typename R, typename... Args>
struct S<R(*)(Args...)> {
    template <typename F>
    static auto runFunc(F func) -> foo
    {
        return foo{[func](Args... args) -> R
            {
                // Do something before calling func
                auto r = func(args...);
                // Do something after call func
                return r;
            }};
    }
};

template <typename F>
inline auto runFunc(F func) -> foo {
  return S<F>::runFunc();
}

int main() {
  A a{};

  std::function<auto(size_t)>
  a.run(12, 13);

  auto r = runFunc([&a]() {
    a.run(12, 13);
  });
  std::cout << "Hi" << std::endl;

  return 0;
}
