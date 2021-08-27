#include <vector>
#include <unordered_map>
#include <assert.h>
#include <iostream>

struct Edge;

using Node  = int;
using Nodes = std::vector<int>;
using Graph = std::unordered_map<Node, std::vector<Edge>>;

struct Edge
{
Node mate;
long away;
};

Graph graph{};

bool NotInGraph(Node n)
{
  return (graph.find(n) == graph.end());
}

void AddNode(Node n)
{
  graph.insert({n, std::vector<Edge>{}});
}

template <typename ...Node>
void AddNodes(Node... ns)
{
  (AddNode(ns), ...);
}

void AddEdge(Node a, Node b)
{
  if (NotInGraph(a))
    AddNode(a);
  if (NotInGraph(b))
    AddNode(a);
  graph[a].emplace_back(Edge{.mate = b});
  graph[b].emplace_back(Edge{.mate = a});
}

Nodes GetMates(Node n)
{
  assert(!(NotInGraph(n)));
  Nodes nodes{};
  for (const Edge& e : graph[n])
    nodes.emplace_back(e.mate);
  return nodes;
}

void FindMates(Node n)
{
  for (const Node& m : GetMates(n))
    std::cout << std::to_string(n) + " : " + std::to_string(m)<< std::endl;
  std::cout << std::endl;
}

void NodeHasEdges(Node n)
{
  char* string{};
  if (!NotInGraph(n))
  {
    const bool has_edges = !(graph[n].empty());
    has_edges ? string = {" has edges"} : string = {" doesn't have edges"};
    std::cout << std::to_string(n) << string << std::endl;
  }
}

int main(int argc, char* argv[])
{
  Node a{5}, b{7}, c{2}, d{6}, e{8}, f{99}, g{3}, h{415}, i{635}, j{247}, k{295}, l{39}, m{66};
  Nodes nodes{a, b, c, d, e, f, g, h, i, j, k, l};

  AddNodes(a,i, j, k, l, b, c, d, e, f, g, h, m);

  AddEdge(a, k);
  AddEdge(b, g);
  AddEdge(c, a);
  AddEdge(l, f);
  AddEdge(g, h);
  AddEdge(i, h);
  AddEdge(a, h);
  AddEdge(e, l);
  AddEdge(d, j);
  AddEdge(e, b);
  AddEdge(g, c);
  AddEdge(l, k);

  NodeHasEdges(a);
  NodeHasEdges(b);
  NodeHasEdges(c);
  NodeHasEdges(d);
  NodeHasEdges(e);
  NodeHasEdges(f);
  NodeHasEdges(g);
  NodeHasEdges(h);
  NodeHasEdges(i);
  NodeHasEdges(k);
  NodeHasEdges(l);
  NodeHasEdges(m);

  FindMates(a);
  FindMates(b);
  FindMates(c);
  FindMates(d);
  FindMates(e);
  FindMates(f);
  FindMates(g);
  FindMates(h);
  FindMates(i);
  FindMates(k);
  FindMates(l);

  return 0;
}