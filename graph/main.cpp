#include <vector>
#include <iostream>

struct Node
{
int                value;
std::vector<Node*> nodes;

bool operator==(Node& n)
{
  return (value == n.value);
}

friend std::ostream& operator<<(std::ostream& o, const Node& n)
{
  o << n.value;
  return o;
}
};

struct Edge
{
  Node a;
  Node b;
};

using Graph = std::vector<Node*>;
using Edges = std::vector<Edge>;

Graph graph{};

void AddNode (Node& n)
{
  graph.emplace_back(&n);
}

void AddEdge (Node& n1, Node& n2)
{
  n1.nodes.emplace_back(&n2);
  n2.nodes.emplace_back(&n1);
}

void PrintEdges(Node& d)
{
  Edges edges{};

  for (auto& n : graph)
    for (auto& attached_n : n->nodes)
      if (*(attached_n) == d)
        edges.emplace_back(Edge{*n, d});

  for (const auto& edge : edges)
    std::cout << edge.a << " : " << edge.b << std::endl;
}




int main(int argc, char* argv[])
{

  Node a{1};
  Node b{2};
  Node c{3};
  Node d{4};
  Node e{5};
  Node f{6};
  Node g{7};
  Node h{8};
  Node i{9};

  AddNode(a);
  AddNode(b);
  AddNode(c);
  AddNode(d);
  AddNode(e);
  AddNode(f);
  AddNode(g);
  AddNode(h);
  AddNode(i);


  AddEdge(a, c);
  AddEdge(h, b);
  AddEdge(h, a);

  PrintEdges(a);

  return 0;
}