#include <stdio.h>
#include <stdlib.h>

/**
 *
 * 3 Functions
 *
 * 1. Append book of y pages to shelf x
 * 2. Print size of y book on shelf x
 * 3. Print size of shelf x
 */

int*  books;   // num of books on each shelf
int** pages;   // shelves of books, with value of number of pages in book
int   shelves; // num shelves
int   queries;


void cleanup()
{
  for (int i = 0; i < shelves; i++) // for each shelf
    if (*(pages + i))               // if shelf
      free(*(pages + i));

  if (books)                        // if book numbers
      free(books);
  if (pages)                        // if shelves
    free(pages);
}
/**
 * Take input:
 * - Number of shelves
 * - Number of queries
 *
 */

int main()
{
  scanf("%d", &shelves);
  scanf("%d", &queries);

  assert(shelves < 100000);
  assert(queries < 100000);

  books = (int*)malloc(shelves * sizeof(int));
  pages = (int**)malloc(shelves * sizeof(int*));
  for (int i = 0; i < shelves; i++)
  {
    pages[i] = (int*)malloc(1100 * sizeof(int*));// add array for shelf
    books[i] = 0;                         // num of books on that shelf is 0
  }

  while (queries--)
  {
      int type;
      int x, y;
      scanf("%d", &type);
      switch (type)
      {
        case(1):
          scanf("%d %d", &x, &y);
                                               // insert book of y pages on x shelf
        pages[x][books[x]] = y;
        books[x]++;                                   // book num on shelf x increases
        break;

        case(2):
          scanf("%d %d", &x, &y);
          printf("%d\n", *(*(pages + x) + y)); // dereference num of pages in book
        break;

        case(3):
          scanf("%d", &x);
          printf("%d\n", *(books + x));        // dereference number of books on shelf
        break;
      }
  }

  cleanup();
  return 0;
}