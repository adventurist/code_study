#include "rbt.hpp"

/**
 * Search
 *
 * @param   [in]  {int}
 * @param   [in]  {Node*} Cursor position
 * @returns [out] {Node*}
 */
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

/**
 * Insert
 *
 * @param  [in] {int} value
 */
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
        return Restore(node->left);
      }
      else
        node = node->left;
    else
      if (!node->right)
      {
        node->right = new Node{.value = value, .parent = node};
        return Restore(node->right);
      }
      else
        node = node->right;
  }
}

/**
 * Restore
 *
 * Corrects violations after insertion
 *
 * @param [in] {Node*} Freshly inserted node
 */
void  RBT::Restore(Node* node)
{
  if (node == m_root)
    return (void)(node->colour = Colour::black);

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

/**
 * SwapColour
 *
 * Helper function to swap the colour of two nodes
 *
 * @param [in] {Node*} x
 * @param [in] {Node*} y
 */
static void SwapColour(Node* x, Node* y)
{
  const auto x_colour = (x) ? x->colour : Colour::black;
  const auto y_colour = (y) ? y->colour : Colour::black;
  if (x)
    x->colour           = y_colour;
  if (y)
    y->colour           = x_colour;
}

/**
 * RotateBlackUncle
 *
 * Helper method to fix violations present when a freshly inserted node has a
 * red parent and a black uncle
 *
 * @param [in] {Node*}  node
 * @param [in] {bool}   node_is_left
 * @param [in] {bool}   parent_is_left
 */
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

/**
 * RotateLeft
 *
 * @param [in] {Node*} node
 */
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

/**
 * RotateRight
 *
 * @param [in] {Node*} node
 */
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

/**
 * HasRedChild
 *
 * @param   [in]  {Node*} node
 * @returns [out] {bool}
 */
static bool HasRedChild(Node* node)
{
  return (node) ?
    ((node->left  && node->left->colour  == Colour::red) ||
     (node->right && node->right->colour == Colour::red))   :
    false;
}

/**
 * GetRedChild
 *
 * Helper function returns the node's red child, if it has one, and the left child
 * if it has two.
 *
 * @param   [in]  {Node*} node
 * @returns [out] {Node*}
 */
static Node* GetRedChild(Node* node)
{
  return (node) ?
    (node->left && node->left->colour == Colour::red) ?
      node->left :
      (node->right && node->right->colour == Colour::red) ?
        node->right :
        nullptr :
      nullptr;
}

/**
 * FixDoubleBlack
 *
 * Helper method to fix violations present after a node has been marked DoubleBlack
 *
 * @param [in] {Node*}
 * @param [in] {bool}
 */
void RBT::FixDoubleBlack(Node* s, bool is_left)
{
  Node* r        = GetRedChild(s);
  bool  left_c   = (r == s->left);
  bool  right_c  = !(left_c);
  bool  is_right = !(is_left);
  bool  black_s  = (s) ? s->colour == Colour::black : true;

  if (s && r && black_s)
  {
    if (is_left && left_c)   // LEFT LEFT
      RotateRight(s);
    else
    if (is_left && right_c)  // LEFT RIGHT
    {
      RotateLeft (s);
      RotateRight(r);
    }
    else
    if (is_right && right_c) // RIGHT RIGHT
      RotateLeft(s);
    else                     // RIGHT LEFT
    {
      RotateRight(s);
      RotateLeft (r);
    }
  }
  else
  if (!(r) && black_s)      // Two black children
  {
    s->colour = Colour::red;
    if (s->parent != m_root && s->parent->colour == Colour::black)
      FixDoubleBlack(s->parent, (s->parent == s->parent->parent->left));
  }
  else
  if (!(black_s))          // Red sibling
  {
    if (is_left)
      RotateRight(s->parent);
    else
      RotateLeft(s->parent);
  }
}

/**
 * PerformDelete
 *
 * Helper method to delete a node and deduce if corrections must be made
 *
 * @param [in] {Node*}
 */
void RBT::PerformDelete(Node* node)
{ // Assume only one child
  Node* u      = node;
  Node* v      = (node->left) ? node->left : node->right;
  bool  left_c = (node == node->parent->left);

  bool double_black = (u->colour == Colour::black && (v) ? v->colour == Colour::black : true);

  if (!double_black) // Simple case
  {
    Node* parent = u->parent;
    v->colour    = Colour::black;

    if (left_c)
      parent->left  = v;
    else
      parent->right = v;

    delete node;
  }
  else
  {
    Node* s = (left_c) ? node->parent->right : node->parent->left;

    if (left_c)
      node->parent->left  = nullptr;
    else
      node->parent->right = nullptr;

    delete node;
    FixDoubleBlack(s, !(left_c));
  }
}

/**
 * DeleteNode
 *
 * @param {int}   value
 * @param {Node*} node The node being inspected, which defaults to root
 */
void RBT::DeleteNode(int value, Node* node)
{
  if (node)
    if (node->value == value)
      PerformDelete(node);
    else
      (node->value < value) ?
        DeleteNode(value, node->right) :
        DeleteNode(value, node->left);
  else
    throw std::invalid_argument{"Cannot delete non-extant value"};
}

/**
 * Delete
 *
 * @param [in] {int} value
 */
void RBT::Delete(int value)
{
  DeleteNode(value, m_root);
}

/**
 * IncrementToDepth
 *
 * Helper function to measure the depth of a node
 *
 * @param [in]     {int}   i     The current depth
 * @param [in/out] {int&}  depth A reference to variable where the final depth will be stored
 * @param [in]     {Node*} n     The node currently being measured
 */
void IncrementToDepth(int i, int& best, Node* n)
{
  if (n)
  {
    best  = (i > best) ? i : best;
    int j = i;
    if (n->left)
      IncrementToDepth(++i, best, n->left);
    if (n->right)
      IncrementToDepth(++j, best, n->right);
  }
}

/**
 * PrintNode
 *
 * @param [in] {Node*}       node
 * @param [in] {std::string} spacing
 */
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

/**
 * Print
 */
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
