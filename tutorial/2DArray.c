#include <stdio.h>

int main() {
  // array 2D: penggunaan untuk grid, matrix atau table dari sebuah data
  int numbers[2][3] = {{1, 2, 3}, {4, 5, 6}}; // [2] kolom, dan [3] baris

  // int numbers[2][3];
  //
  // numbers[0][0] = 1;
  // numbers[0][1] = 2;
  // numbers[0][2] = 3;
  // numbers[1][0] = 4;
  // numbers[1][1] = 5;
  // numbers[1][2] = 6;

  // buat array dengan 3 baris
  // dan 3 kolom
  int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  int rows = sizeof(arr) / sizeof(arr[0]);
  int columns = sizeof(numbers[0]) / sizeof(numbers[0][0]);

  printf("baris: %d\n", rows);
  printf("kolom: %d\n", columns);

  // print setiap elemen pada array
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      printf("arr[%d][%d]: %d    ", i, j, arr[i][j]);
    }
    printf("\n");
  }
  return 0;
}
