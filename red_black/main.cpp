#include "red_black.hpp"

int main(int argc, char* argv[])
{

  RedBlackTree tree{};

  Leaf* node1 = tree.Insert(2);
  Leaf* node2 = tree.Insert(3);
  Leaf* node3 = tree.Insert(1);
  Leaf* node4 = tree.Insert(4);
  Leaf* node5 = tree.Insert(56);
  Leaf* node6 = tree.Insert(45);
  Leaf* node7 = tree.Insert(7);
  Leaf* node8 = tree.Insert(5);

  tree.Print();
  return 0;
}