#include <stdio.h>
#include <stdlib.h>

void quicksort(int* arr, int low, int high)
{
  if (low < high)
  {
    int pivot = arr[high];                  // arbitrary
    int i     = (low - 1);

    for (int j = low; j <= (high - 1); j++)
      if (arr[j] < pivot)
      {
        int t  = arr[++i];
        arr[i] = arr[j];
        arr[j] = t;
      }

    int t      = arr[i + 1];
    arr[i + 1] = pivot;
    arr[high]  = t;

    quicksort(arr, low,   i);
    quicksort(arr, i + 2, high);
  }
}

void print(int* arr, int size)
{
  for (int i = 0; i < size; i++) printf("%d", arr[i]);
}

int main()
{
  int arr[] = {10, 7, 8, 9, 1, 92, 5};
  int n     = (sizeof(arr)) / (sizeof(arr[0]));

  quicksort(arr, 0, n - 1);
  print(arr, n);

  return 0;
}