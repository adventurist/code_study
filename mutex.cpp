#include <functional>
#include <iostream>
#include <mutex>
#include <thread>
#include <vector>

class ACFunctor {
 public:
  void operator()(const std::vector<int>& v, unsigned int beginIndex,
                  unsigned int endIndex) {
    acum = 0;
    for (unsigned int i = beginIndex; i < endIndex; ++i) {
      acum += v[i];
    }
  }
  unsigned long long acum;
};

void print_result(ACFunctor f) {
  std::cout << "Functor result: " << f.acum << std::endl;
}

int main(int argc, char** argv) {
  std::vector<int> v1{1, 4, 2, 5, 6, 4, 2, 3, 2, 65, 3};
  std::vector<int> v2{4, 5, 6, 2, 5, 7, 4, 6, 44, 77, 5};

  ACFunctor functor1 = ACFunctor();
  ACFunctor functor2 = ACFunctor();

  std::thread t1(std::ref(functor1), std::ref(v1), 0, v1.size());
  std::thread t2(std::ref(functor2), std::ref(v2), 0, v2.size());

  t1.join();
  t2.join();

  print_result(functor1);
  print_result(functor2);

  return 0;
}

