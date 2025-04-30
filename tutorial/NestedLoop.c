#include <stdio.h>

int main() {
  // nested loop: looping didalam looping
  int rows;
  int columns;
  char symbol;

  printf("Masukkan jumlah baris: ");
  scanf("%d", &rows);
  printf("Masukkan jumlah kolom: ");
  scanf("%d", &columns);

  for (int i = 1; i <= rows; i++) {
    for (int j = 1; j <= columns; j++) {
      printf("%d", j);
    }
    printf("\n");
  }

  return 0;
}
