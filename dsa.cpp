#include <iostream>

void insertionSort(int arr[], int n) {
  int i, key, j;
  for (i = 1; i < n; i++) {
    key = arr[i];
    j = i - 1;
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
  }
}

void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
}

int main() {
  int arr[] = {5, 2, 4, 6, 1, 3};
  int n = sizeof(arr) / sizeof(arr[0]);
  std::cout << "Original array: ";
  printArray(arr, n);
  insertionSort(arr, n);
  std::cout << "Sorted array: ";
  printArray(arr, n);
  return 0;
}