#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};
typedef struct triangle triangle;

float compute_area(triangle t)
{
  float   s  = ((t.a + t.b + t.c) / 2);
  return sqrt(s * (s - t.a) * (s - t.b) * (s - t.c));
}


void sort_by_area(triangle* tr, int n) {
  float sizes[n];
  for (int i = 0; i < n; i++)
  {
    sizes[i] = compute_area(tr[i]);
  }
  for (int i = 0; i < n; i++)
    printf("Triangle %d: %f\n", i, sizes[i]);
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}

  free(tr);
	return 0;
}