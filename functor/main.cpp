#include <iostream>
#include <memory>
#include <string>
#include <utility>

using namespace std;

unique_ptr<int> lifted_strength(shared_ptr<string> s) {
  return unique_ptr<int>(new int((*s).length()));
}

unique_ptr<int> liftedLength(shared_ptr<string> s) {
  return unique_ptr<int>(new int((*s).length()));
}

int main(int argc, char** argv) {
  string str{"characters are here"};
  shared_ptr<string> p_tr(&str);
  auto result = lifted_strength(p_tr);
  auto value = result.get();
  cout << "result: " << *value << endl;
  delete value;

  return 0;
}
