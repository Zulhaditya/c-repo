#include <stdio.h>

int main() {
  int a, b;
  float c, d;

  a = 13;
  b = 5;

  c = a / b;               // pembagian menggunakan integer
  d = (float)a / (float)b; // pembagian menggunaan float dengan typecasting

  printf("[integer]\t a = %d\t b = %d\n", a, b);
  printf("[floats]\t c = %f\t d = %f\n", c, d);
}
