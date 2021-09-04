#include <iostream>
#include "rbt.hpp"

int main(int argc, char* argv[])
{

  RBT tree{};

  tree.Insert(2);
  tree.Insert(3);
  tree.Insert(1);
  tree.Insert(56);
  tree.Insert(45);
  tree.Insert(7);

  Node* node = tree.Search(56);

  std::cout << node->value << std::endl;

  return 0;
}