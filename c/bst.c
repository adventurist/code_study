#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct tree
{
  int value;
  struct tree *left, *right;
};
typedef struct tree node;

void destroy(node* leaf)
{
  if (leaf != NULL)
  {
    destroy(leaf->left);
    destroy(leaf->right);
    free(leaf);
  }
}

void insert(int key, node** leaf)
{
  if (!(*leaf))
  {
    (*leaf) = (node*) malloc(sizeof(node));
    (*leaf)->value = key;
    (*leaf)->left  = (*leaf)->right = NULL;
    return;
  }

  if (key < (*leaf)->value)
  {
    insert(key, &(*leaf)->left);
  }
  else
  if (key > (*leaf)->value)
  {
    insert(key, &(*leaf)->right);
  }
}

node* find(int value, node* leaf)
{
  if (leaf != NULL)
  {
    if (leaf->value == value)
      return leaf;

    if (leaf->value > value)
      return find(value, leaf->left);

    return find(value, leaf->right);
  }

  return NULL;
}

int main()
{
  node* leaf = NULL;

  int random_arr[] = {1, 43, 6, 2, 7, 342, 7, 5, 44, 7, 33, 8, 72, 36, 47, 81, 44, 61};
  int size         = (sizeof(random_arr) / sizeof(random_arr[0]));

  for (int i = 0; i < size; i++)
    insert(random_arr[i], &leaf);

  node* child = find(43, leaf);

  if (child != NULL)
    printf("We found the right leaf");

  destroy(leaf);

  return 0;
}
