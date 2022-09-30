#include <iostream>
#include <limits>

static const int V       = 9;
static const int INT_MAX = std::numeric_limits<int>::max();

int MinDist(bool shortest_path_set[], int dist[])
{
  int min = INT_MAX, min_index;

  for (int v = 0; v < V; v++)
    if (shortest_path_set[v] == false && dist[v] <= min)
      min = dist[v], min_index = v;
  return min_index;
}

void print(int dist[])
{
  std::cout << "Vertex - Distance from Source" << std::endl;
  for (int i = 0; i < V; i++)
    std::cout << i << "   -  " << dist[i] << std::endl;
}

void Dijkstra(int graph[V][V], int src)
{
  static int       dist[V];              // output
  static bool      shortest_path_set[V]; // if v in short path tree
  auto init = [&]{for (int i = 0; i < V; i++) dist[i] = INT_MAX, shortest_path_set[i] = false; dist[src] = 0; };

  init();

  for (int count = 0; count < V - 1; count++)
  {
    int u                = MinDist(shortest_path_set, dist);
    shortest_path_set[u] = true;

    for (int v = 0; v < V; v++)
    {
      bool shortest_not_set = !(shortest_path_set[v]);
      bool vertex_exists    = graph[u][v];
      bool dist_not_max     = dist[u] != INT_MAX;
      bool is_less_distance = (dist[u] + graph[u][v] < dist[v]);

      if (shortest_not_set && vertex_exists && dist_not_max && is_less_distance)
        dist[v] = dist[u] + graph[u][v];
    }
  }

  print(dist);
}

int main(int argc, char* argv[])
{
  int graph[V][V]{
    { 0, 4,  0,  0,  0,  0,  0,  8, 0 },
    { 4, 0,  8,  0,  0,  0,  0, 11, 0 },
    { 0, 8,  0,  7,  0,  4,  0,  0, 2 },
    { 0, 0,  7,  0,  9, 14,  0,  0, 0 },
    { 0, 0,  0,  9,  0, 10,  0,  0, 0 },
    { 0, 0,  4, 14, 10,  0,  2,  0, 0 },
    { 0, 0,  0,  0,  0,  2,  0,  1, 6 },
    { 8, 11, 0,  0,  0,  0,  1,  0, 7 },
    { 0, 0,  2,  0,  0,  0,  6,  7, 0 }
  };

  Dijkstra(graph, 0);

  return 0;
}