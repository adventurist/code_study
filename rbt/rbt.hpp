#include <vector>
#include <stdexcept>
#include <iostream>

template <typename... T>
void log(T... args)
{
  for (const auto& arg : {args...})
    std::cout << arg;
  std::cout << std::endl;
}

template <typename... Args>
void log(Args... args);
template void log(const char*);

enum class Colour
{
  red   = 0x00,
  black = 0x01
};

struct Node
{
  int    value;
  Node*  parent;
  Node*  left;
  Node*  right;
  Colour colour;
};

class RBT
{
public:
RBT()
: m_root(nullptr) {}
/**
  ┌───────────────────────────────────────────┐
  │░░░░░░░░░░░░░░Public Interface░░░░░░░░░░░░░░│
  └───────────────────────────────────────────┘*/
Node* Search(int value, Node* node = nullptr);
void  Insert(int value);
void  Delete(int value);
void  Print ();

private:
/**
  ┌───────────────────────────────────────────┐
  │░░░░░░░░░░░░░░PrivateInterface░░░░░░░░░░░░░░│
  └───────────────────────────────────────────┘*/
void  Restore         (Node* node);
void  RotateBlackUncle(Node* node, bool node_is_left, bool parent_is_left);
void  RotateLeft      (Node* node);
void  RotateRight     (Node* node);
void  DeleteNode      (int value, Node* node);
void  PerformDelete   (Node* node);
void  FixDoubleBlack  (Node* s, bool is_left);

Node* m_root;
};
