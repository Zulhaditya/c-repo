#include <stdio.h>

// bubble sort: jika value di kiri lebih besar dari kanan maka terus geser ke
// kanan
void sort(char array[], int size) {
  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (array[j] > array[j + 1]) {
        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
}

void printArray(char array[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%c ", array[i]);
  }
}

int main() {

  // int array[] = {7, 8, 2, 1, 3, 6, 5, 4, 9};
  char array[] = {'G', 'A', 'X', 'L', 'B', 'D', 'C'};
  int size = sizeof(array) / sizeof(array[0]);

  sort(array, size);
  printArray(array, size);

  return 0;
}
