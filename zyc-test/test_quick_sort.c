#include <stdio.h>
#include "../algorithms/sort/quick_sort.h"
#include "../zyc-libs/utils.h"

int main() {
  int arr[] = {5, 6, 3, 2, 9, 4, 7, 9, 1, 8, 3};
  int len = sizeof(arr) / sizeof(int);

  printf("Input array: ");
  logarr(arr, len);

  quickSort(arr, len);

  printf("Output array: ");
  logarr(arr, len);

  return 0;
}