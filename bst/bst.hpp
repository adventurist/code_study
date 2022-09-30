#include <vector>

struct Node
{
int   value;
Node* parent;
Node* left;
Node* right;
};

class BST
{
public:
BST()
: m_root(nullptr) {}

void  Insert(int value);
void  Delete(int value);
Node* Search(int value, Node* node = nullptr);
void  Print ();

private:
Node* m_root;
};
