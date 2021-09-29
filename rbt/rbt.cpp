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
      RotateBlackUncle(node, is_left, parent_is_left);
  }
}

void SwapColour(Node* x, Node* y)
{
  const auto x_colour = (x) ? x->colour : Colour::black;
  const auto y_colour = (y) ? y->colour : Colour::black;
  if (x)
    x->colour           = y_colour;
  if (y)
    y->colour           = x_colour;
}

void RBT::RotateBlackUncle(Node* node, bool node_is_left, bool parent_is_left)
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

bool HasRedChild(Node* node)
{
  return (node) ?
    ((node->left  && node->left->colour  == Colour::red) ||
      (node->right && node->right->colour == Colour::red)) :
    false;
}

Node* GetRedChild(Node* node)
{
  return (node) ?
    (node->left && node->left->colour == Colour::red) ?
      node->left :
    (node->right && node->right->colour == Colour::red) ?
      node->right :
      nullptr :
    nullptr;
}

void RBT::DeleteDoubleBlack(Node* node)
{
  // If sibling is black and sibling has a red child
  bool is_left = (node->parent->left == node);
  bool is_right = !is_left;
  bool s_is_left = !is_left;
  bool s_is_right = is_left;
  Node* sibling = (s_is_right) ? node->parent->right : node->parent->left;
  Node* r       = GetRedChild(sibling);
  bool has_r_child = (r);
  if (sibling->colour == Colour::black && has_r_child)
  {
    if (s_is_left && r == sibling->left)   // Left Left
      RotateRight(sibling);
    else
    if (s_is_left && r == sibling->right)  // left right
    {
      RotateLeft (sibling);
      RotateRight(r);
    }
    else
    if (s_is_right && r == sibling->right) // Right Right
      RotateLeft(sibling);
    else                                   // Right Left
    {
      RotateRight(sibling);
      RotateLeft (r);
    }
  }
}

static void PerformDelete(Node* node)
{ // Assume only one child
  Node* u = node;
  Node* v = (node->left) ? node->left : node->right;

  bool double_black = (u->colour == Colour::black && v->colour == Colour::black);

  if (!double_black) // Simple case
  {
    Node* parent = u->parent;
    v->colour == Colour::black;
    (node == parent->left) ? parent->left = v : parent->right = v;
  }
  else
  {
    DeleteDoubleBlack(node);
  }
}

void RBT::DeleteNode(int value, Node* node)
{
  if (node)
    if (node->value == value)
      PerformDelete(node);
    else
      (node->value < value) ?
      DeleteNode(value, node->right) : DeleteNode(value, node->left);
  else
    throw std::invalid_argument{"Cannot delete non-extant value"};
}

/**
 * Delete
 *
 * 1.
 */
void RBT::Delete(int value)
{
  DeleteNode(value, m_root);
}

void IncrementToDepth(int i, int& best, Node* n)
{
  if (n)
  {
    best = (i > best) ? i : best;
    int j = i;
    if (n->left)
      IncrementToDepth(++i, best, n->left);
    if (n->right)
      IncrementToDepth(++j, best, n->right);
  }
}

void PrintNode(Node* node, std::string spacing)
{

  if (node)
  {
    log(spacing, std::to_string(node->value), spacing);
    std::string right_spacing = spacing + "      ";
    spacing.pop_back(); spacing.pop_back(); spacing.pop_back(); spacing.pop_back(); spacing.pop_back();
    spacing.pop_back(); spacing.pop_back(); spacing.pop_back(); spacing.pop_back(); spacing.pop_back();
    PrintNode(node->left, spacing);
    PrintNode(node->right, right_spacing);
  }
}

void RBT::Print()
{
  int depth{};
  if (m_root)
    IncrementToDepth(1, depth, m_root);

  std::string spacing{};
  for (int i = 0; i < depth; i++)
    spacing += "          ";

  PrintNode(m_root, spacing);
}