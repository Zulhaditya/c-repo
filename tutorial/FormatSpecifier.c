#include <stdio.h>

int main() {
  // format specifier digunakan untuk memformat tipe data sesuai dengan output
  // yang diingikan

  // %c = character
  // %s = string (array/kumpulan dari character)
  // %f = float
  // %lf = double
  // %d = integer

  // %.1 = decimal presisi
  // %1 = minimal field
  // %- = left align

  float item1 = 7.67;
  float item2 = 10.00;
  float item3 = 297.69987;

  // %.2f untuk format 2 angka saja dibelakang koma
  printf("Item 1: $%.2f\n", item1);
  printf("Item 2: $%.2f\n", item2);

  // %.0f tanpa koma dibelakang
  printf("Item 3: $%.0f\n", item3);

  return 0;
}
