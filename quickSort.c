/* Implementation of the quickSort algorithm */
void quickSort(int arr[], int low, int high) {
  if (low < high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {

      if (arr[j] <= pivot) {
        i++;

        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
      }
    }

    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    quickSort(arr, low, i);
    quickSort(arr, i + 2, high);
  }
}
