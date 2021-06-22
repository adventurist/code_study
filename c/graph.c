#include <stdio.h>
#include <stdlib.h>

#define N 6

struct Graph
{
  struct Node* head[N];

};

struct Node
{
  int dest;
  struct Node* next;
};

struct Edge
{
  int src, dest;
};

struct Graph* createGraph(struct Edge edges[], int n)
{
  unsigned i;

  struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));

  for (int i = 0; i < N; i++)
    graph->head[i] = NULL;

  for (i = 0; i < n; i++)
  {
    int src = edges[i].src;
    int dest = edges[i].dest;


    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->dest = dest;

    newNode->next = graph->head[src];

    graph->head[src] = newNode;
  }

  return graph;
}

void printGraph(struct Graph* graph)
{
  int i;
  for (i = 0; i < N; i++)
  {
    struct Node* ptr = graph->head[i];
    while ()
  }
}

int main(int argc, char** argv)
{

  return 0;
}
