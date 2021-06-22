#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int binary_search(int* arr, int low, int high, int target)
{
  if (high >= low)
  {
    int mid = (low + ((high - low) / 2));

    if (arr[mid] == target)
      return mid;

    if (arr[mid] > target)
      return binary_search(arr, low, mid - 1, target);

    return binary_search(arr, mid + 1, high, target);
  }

  return -1;
}

int main()
{

  int arr[]   = {1, 4, 6, 8, 10, 14, 17, 19, 22, 25, 29, 33, 39, 41, 44, 45, 49, 50, 55, 58, 59, 60, 66, 69, 108, 112};
  int size    = (sizeof(arr) / sizeof(arr[0])) - 1;
  int target  = 25;
  int result  = binary_search(arr, 0, size, target);

  printf("Result was %s\n", (arr[result] == target) ? "Found" : "Not found");

  return 0;
}
