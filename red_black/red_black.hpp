#include <vector>
#include <stdlib.h>
#include <iostream>

/**
 * 1. BLACK root
 * 2. No adjacent RED
 * 3. Same distance to each NULL
 */
enum class Colour
{
  red,
  black
};

struct Leaf
{
Colour   colour;
int64_t value;
Leaf*    parent;
Leaf*    left;
Leaf*    right;
};

void RotateOrRecolour(Leaf* leaf);

class RedBlackTree
{

public:
RedBlackTree()
: m_root_ptr{nullptr} {}
void* Search(Leaf* leaf, int64_t value);
Leaf* Insert(int64_t value);
void  Rotate(Leaf* leaf, Leaf* aunt);
void  Restore(Leaf* red_leaf);
bool  Delete();
void  Print();

private:
std::vector<Leaf> m_nodes;
Leaf*             m_root_ptr;
Leaf              m_root;
};

static bool NotNull(Leaf* leaf)
{
  return (nullptr != leaf);
}


void* RedBlackTree::Search(Leaf* leaf, int64_t value)
{
  if (!leaf)
  return Search(m_root_ptr, value);

  if (leaf->value == value)
    return leaf;

  if (leaf->value < value)
    if (!leaf->right)
      return nullptr;
    else
      return Search(leaf->right, value);
  else
    if (!leaf->left)
      return nullptr;
    else
      return Search(leaf->left, value);
}

Leaf* RedBlackTree::Insert(int64_t value)
{
  if (m_root_ptr && m_root.value == value)
    return m_root_ptr;
  else
  {
    bool inserted{false};
    m_nodes.push_back(Leaf{.colour = Colour::red, .value = value});
    Leaf& leaf = m_nodes.back();

    if (!m_root_ptr)
    {
      m_root = leaf;
      m_root_ptr = &m_root;
      m_root.colour = Colour::black;
      return m_root_ptr;
    }

    Leaf* parent = m_root_ptr;
    while (!inserted)
    {
      if (parent->value == value)
        return parent;
      if (parent->value < value)
      {
        if (!parent->right)
        {
          parent->right = &leaf;
          leaf.parent = parent;
          if (parent->colour == Colour::red)
            Restore(&leaf);
          inserted = true;
        }
        else
          parent = parent->right;
      }
      else
      {
        if (!parent->left)
        {
          parent->left = &leaf;
          leaf.parent = parent;
          if (parent->colour == Colour::red)
            Restore(&leaf);
          inserted = true;
        }
        else
          parent = parent->left;
      }
    }
    return &leaf;
  }
}

/**
 * Recolour
 *
 * @param[in] {Leaf*} leaf
 *
 * Called after insertion
 * - Leaf is red
 * - Leaf's parent is red
 * - Leaf's uncle is red
 */
void Recolour(Leaf* leaf)
{
  auto parent    = leaf->parent;
  auto gr_parent = parent->parent;

  if (gr_parent->left)
  {
    gr_parent->left->colour = Colour::black;
    parent->colour          = Colour::black;
    gr_parent->colour       = Colour::red;

    if (gr_parent->parent)
    {
      if (gr_parent->parent->left && gr_parent->parent->left->colour == Colour::red)
        Recolour(gr_parent); // TODO: Do we perform this recursively?
      else
        gr_parent->colour = Colour::black;
    }
  }
}

/**
 * RotateOrRecolour
 *
 * @param[in] {Leaf*} leaf
 *
 * - Leaf is red
 * - Leaf's parent is red
 */
void RotateOrRecolour(Leaf* leaf)
{
  auto parent = leaf->parent;
  if (parent)
  {
    auto gr_parent = parent->parent;
    if (gr_parent)
    {
      bool red_uncle = (gr_parent->left && gr_parent->left->colour == Colour::red);
      if (red_uncle)
        Recolour(leaf);
    }
  }
}
void DoPrint(Leaf* leaf, int space = 0, bool is_root = false)
{
  if (leaf)
  {
    char* colour_s;
    space = space + 10;
    DoPrint(leaf->right, space);
    std::cout << std::endl;
    for (int i = 10; i < space; i++)
      std::cout << ' ';

    if (is_root)
      std::cout << "Root:";
    if (leaf->colour == Colour::red)
      colour_s = "Red";
    else
      colour_s = "Black";
    std::cout << leaf->value << ':' << colour_s << std::endl;

    DoPrint(leaf->left, space);
  }
}

void LeftRotate(Leaf* leaf)
{
  Leaf* x = leaf->right;
  Leaf* y = leaf->left;
  x->left = leaf;
  leaf->right = y;
  leaf->parent = x;
  if (y)
    y->parent = leaf;
}

void RightRotate(Leaf* leaf)
{
  Leaf* x  = leaf->left;
  Leaf* y  = leaf->right;
  x->right = leaf;
  leaf->left = y;
  leaf->right = x;
  if (y)
    y->parent = leaf;
}

void RedBlackTree::Print()
{
  DoPrint(m_root_ptr, 0, true);
}

void RedBlackTree::Restore(Leaf* leaf)
{
  std::cout << "Before Restore" << std::endl;
  Print();
  while (leaf != m_root_ptr && leaf->parent && leaf->parent->colour == Colour::red)
  {
    if (leaf->parent == leaf->parent->parent->left)
    {
      auto uncle = leaf->parent->parent->right;
      if (uncle->colour == Colour::red)
      {
        leaf->parent->colour         = Colour::black;
        uncle->colour                = Colour::black;
        leaf->parent->parent->colour = Colour::red;
        leaf = leaf->parent->parent;
      }
      else
      {
        if (leaf == leaf->parent->right)
        {
          leaf = leaf->parent;
          LeftRotate(leaf);
        }

        leaf->parent->colour         = Colour::black;
        leaf->parent->parent->colour = Colour::red;
        RightRotate(leaf->parent->parent);
      }
    }
    else
    {
      auto uncle = leaf->parent->parent->left;
      if (uncle->colour == Colour::red)
      {
        leaf->parent->colour         = Colour::black;
        uncle->colour                = Colour::black;
        leaf->parent->parent->colour = Colour::red;
        leaf = leaf->parent->parent;
      }
      else
      {
        if (leaf == leaf->parent->left)
        {
          leaf = leaf->parent;
          LeftRotate(leaf);
        }

        leaf->parent->colour         = Colour::black;
        leaf->parent->parent->colour = Colour::red;
        RightRotate(leaf->parent->parent);
      }
    }
  }
  std::cout << "After Restore" << std::endl;
  Print();
}