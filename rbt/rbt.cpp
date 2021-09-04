#include "rbt.hpp"

Node* RBT::Search(int value, Node* node)
{
  node = (!node) ? m_root : node;

  if (!node || node->value == value)
    return node;

  if (node->value > value)
    return Search(value, node->left);
  else
    return Search(value, node->right);
}

void RBT::Insert(int value)
{
  if (!m_root)
    m_root = new Node{.value = value, .colour = Colour::black};

  Node* node = m_root;
  for (;;)
  {
    if (node->value == value) return;

    if (node->value > value)
      if (!node->left)
      {
        node->left = new Node{.value = value, .parent = node};
        Restore(node->left);
        return;
      }
      else
        node = node->left;
    else
      if (!node->right)
      {
        node->right = new Node{.value = value, .parent = node};
        Restore(node->right);
        return;
      }
      else
        node = node->right;
  }
}

void  RBT::Restore(Node* node)
{
  if (node == m_root)
  {
    node->colour = Colour::black;
    return;
  }

  const bool is_left = (node == node->parent->left);

  if (node->parent->parent)
  {
    const bool parent_is_left = (node->parent == node->parent->parent->left);
    Node*      uncle          = (parent_is_left) ? node->parent->parent->right :
                                                   node->parent->parent->left;

    if (uncle && uncle->colour == Colour::red)
    {
      node->parent->colour         = Colour::black;
      uncle->colour                = Colour::black;
      node->parent->parent->colour = Colour::red;
      Restore(node->parent->parent);
    }
    else
    {
      RotateBlackUncle(node, is_left, parent_is_left);
    }
  }
}

void SwapColour(Node* x, Node* y)
{
  const auto x_colour = x->colour;
  const auto y_colour = y->colour;
  x->colour           = y_colour;
  y->colour           = x_colour;
}

void  RBT::RotateBlackUncle(Node* node, bool node_is_left, bool parent_is_left)
{
  Node*      parent          = node->parent;
  const bool parent_is_right = !(parent_is_left);
  const bool node_is_right   = !(node_is_left);

  if (parent_is_left && node_is_left)        // LEFT LEFT
  {
    RotateRight(node->parent->parent);
    SwapColour(parent, parent->parent);
  }
  else
  if (parent_is_left && node_is_right)       // LEFT RIGHT
  {
    RotateLeft(parent);
    RotateBlackUncle(parent, true, true);
  }
  else
  if (parent_is_right && node_is_right)      // RIGHT RIGHT
  {
    RotateLeft(parent->parent);
    SwapColour(parent, parent->parent);
  }
  else
  if (parent_is_right && node_is_left)       // RIGHT LEFT
  {
    RotateRight(parent);
    RotateBlackUncle(parent, false, false);
  }
}

void RBT::RotateLeft(Node* node)
{
  auto right    = node->right;
  node->right   = right->left;
  right->parent = node->parent;

  if (node->right)
    node->right->parent = node;

  if (!node->parent)
    m_root = right;
  else
  if (node == node->parent->left)
    node->parent->left = right;
  else
    node->parent->right = right;

  right->left   = node;
  node->parent  = right;
}

void RBT::RotateRight(Node* node)
{
  auto left    = node->left;
  node->left   = left->right;
  left->parent = node->parent;

  if (node->left)
    node->left->parent = node;

  if (!node->parent)
    m_root = left;
  else
  if (node == node->parent->left)
    node->parent->left = left;
  else
    node->parent->right = left;

  left->right  = node;
  node->parent = left;
}