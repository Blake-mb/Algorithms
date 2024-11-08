#include <stdbool.h>

/* Implementation of the bubbleSort algorithm */
void bubbleSort(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    bool sorted = true;
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
       int temp = arr[j];
       arr[j] = arr[j + 1];
       arr[j + 1] = temp;
       sorted = false;
      }
    }

    if (sorted) break;
  }
}
