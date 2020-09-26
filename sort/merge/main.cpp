#include <iostream>

template <typename T>
void merge(T* v, T l, T m, T r) {
  T n1 = (m - l + 1);
  T n2 = r - m;

  T left [n1];
  T right[n2];

  for (T i = 0; i < n1; i++) left[i] = v[l + i];
  for (T i = 0; i < n2; i++) right[i] = v[(m + 1) + i];

  T i{0}; // Left index
  T j{0}; // Right index
  T k{l}; // Insert index
  while (i < n1 && j < n2) {
    if (left[i] <= right[j]) {
      v[k] = left[i];
      i++;
    } else {
      v[k] = right[j];
      j++;
    }
    k++;
  }

  while (i < n1) {
    v[k] = left[i];
    i++;
    k++;
  }

  while (j < n2) {
    v[k] = right[j];
    j++;
    k++;
  }

}

template <typename T>
void sort(T* v, T l, T r) {
  if (l < r) {
    T m = l + (r - l) / 2;
    sort(v,  l,    m);
    sort(v, (m+1), r);
    merge(v, l, m, r);
  }
}

template <typename T>
void print(T* v) {
  for (int i = 0; i < 20; i++) {
    std::cout << v[i] << " ";
  }
  std::cout << std::endl;
}

int main(int argc, char** argv) {
  int v[20]{
    12, 542, 46, 195, 2, 592, 1, 590, 540, 106, 301, 888, 301, 305, 459, 105, 603, 51, 905, 59
  };
  print(v);

  size_t size = (sizeof(v) / sizeof(v[0]));

  int l = 0;
  int h = size - 1;
  sort(v, l, h);
  print(v);

  return 0;
}
