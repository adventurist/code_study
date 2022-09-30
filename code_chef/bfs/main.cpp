#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>
#include <deque>

using Vertex = std::vector<int>;
using Graph  = std::unordered_map<int, Vertex>;

Graph graph{};

bool HasEdge(Vertex v, int u)
{
  return std::find(v.begin(), v.end(), u) != v.end();
}

void AddEdge(int v, int w)
{
  if (!HasEdge(graph.at(v), w))
    graph.at(v).push_back(w);
  if (!HasEdge(graph.at(w), v))
    graph.at(w).push_back(v);
}

void BuildGraph()
{
  graph.insert({1,{}});
  graph.insert({2,{}});
  graph.insert({3,{}});
  graph.insert({4,{}});
  graph.insert({5,{}});

  AddEdge(2, 5);
  AddEdge(3, 4);
  AddEdge(2, 1);
  AddEdge(5, 2);
  AddEdge(1, 3);
}

int BFS(int v, int w)
{

  struct PathVertex
  {
    int vertex;
    int pre;
    int distance;
  };

  std::deque<PathVertex> queue{};
  bool            visited[v];
  for (int i = 0; i < v; i++) visited[i] = false;

  int count{};

  queue.emplace_back(PathVertex{.vertex = v, .pre = -1, .distance = 0});

  while (!queue.empty())
  {
    auto path = queue.front();
    v         = path.vertex;
    if (v == w)
      return path.distance;
    queue.pop_front();

    int distance = (path.distance + 1);
    for (const auto& n : graph.at(v))
      if (!visited[n])
        queue.emplace_back(PathVertex{.vertex = n, .pre = v, .distance = distance});
  }

  return 0;
}


int main(int argc, char* argv[])
{
  BuildGraph();
  int distance = BFS(3, 4);
  std::cout << "Distance was " << distance << std::endl;

  return 0;
}
