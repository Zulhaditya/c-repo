#include <math.h>
#include <stdio.h>

int main() {
  // hitung sisi miring segitiga siku-siku
  // rumusnya c = akar dari a2+b2
  // program harus dicompile dengan cara: gcc RumusSegitiga.c -o
  // ../build/RumusSegitiga -lm

  double A;
  double B;
  double C;

  printf("Sisi A: ");
  scanf("%lf", &A);

  printf("Sisi B: ");
  scanf("%lf", &B);

  C = sqrt(A * A + B * B);
  printf("Sisi miring segitiga siku-siku: %0.5f\n", C);

  return 0;
}
