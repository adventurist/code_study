#include <vector>

enum class Colour{
red,
black
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

void  Insert(int value);
Node* Search(int value, Node* node = nullptr);

void  Restore(Node* node);
void  RotateBlackUncle(Node* node, bool node_is_left, bool parent_is_left);

void  RotateLeft (Node* node);
void  RotateRight(Node* node);


void  Delete(int value);
void  Print ();
private:
Node* m_root;
};
