#include <iostream>

template <typename T>
void print(T* v) {
  for (int i = 0; i < 20; i++) {
    std::cout << v[i] << " ";
  }
  std::cout << std::endl;
}

template <typename T>
void swap(T* a, T* b) {
  T t = *a;
  *a = *b;
  *b = t;
}

template <typename T>
T partition (T* arr, T low, T high) {
  T pivot = arr[high];
  T i = (low - 1);

  for (T j = low; j <= high - 1; j++) {
    if (arr[j] < pivot) {
      i++;                      // smaller
      swap(&arr[i], &arr[j]);
    }
  }
  swap(&arr[i + 1], &arr[high]);
  return (i + 1);
}

template <typename T>
void QuickSort(T* arr, T low, T high) {
  if (low < high) { // partition index pi
    T pi = partition(arr, low, high);

    QuickSort(arr, low, pi - 1);
    QuickSort(arr, pi + 1, high);
  }
}

int main(int argc, char** argv) {
  int v[20]{
    12, 542, 46, 195, 2, 592, 1, 590, 540, 106, 301, 888, 301, 305, 459, 105, 603, 51, 905, 59
  };
  print(v);

  size_t size = (sizeof(v) / sizeof(v[0]));

  int l = 0;
  int h = size - 1;
  QuickSort(v, l, h);
  print(v);

  return 0;
}
