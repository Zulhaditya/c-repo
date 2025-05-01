#include <stdio.h>

int main() {
  // memory: array dalam bytes tersimpan di RAM (jalan)
  // memory block: single unit byte di memory, menyimpan value (orang)
  // memory address: alamat dimana lokasi memory block (alamat)

  char a = 'X';
  char b = 'Y';
  char c = 'Z';

  char z[4];

  // output size memory block
  printf("char a: %d byte\n", sizeof(a));
  printf("char b: %d byte\n", sizeof(b));
  printf("char c: %d byte\n", sizeof(c));
  printf("char d: %d byte\n\n", sizeof(z));

  // output memory address dari variable, format hexadecimal
  // hexadecimal: 0-9 + A-F (16 digit value-nya)
  printf("Address a: %p\n", &a);
  printf("Address b: %p\n", &b);
  printf("Address c: %p\n", &c);
  printf("Address z: %p\n", &z);
}
