#include <iostream>
#include <vector>
using namespace std;

struct Vee {
  vector<int> v;
  const vector<int> return_vec_copy() { return v; }

  const vector<int>&& return_vec_readonly() const { return std::move(v); }

  int*&& guts() { return std::move(v.data()); }

  void check() { cout << v.data() << endl; }
};

int main() {
  Vee vee;
  vee.v.push_back(1);
  vee.v.push_back(2);
  vee.v.push_back(3);
  vee.check();
  auto guts = vee.guts();
  cout << guts << endl;
  //  vector<int> v2 = vee.return_vec_copy();
  //  cout << &v2 << endl;
  //  v2.push_back(4);
  vee.check();
  /* for (int i = 0; i < vee.v.size(); i++) { */
  /*   cout << vee.v.at(i) << ", "; */
  /* } */
  /* cout << endl; */

  /* for (int i = 0; i < v2.size(); i++) { */
  /*   cout << v2.at(i) << ", "; */
  /* } */
  /* cout << endl; */

  /* cout << &vee.v << endl; */

  /* cout << &v2 << endl; */

  return 0;
}
