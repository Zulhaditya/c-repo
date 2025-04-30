#include <stdio.h>

int main() {
  // kalkulator dasar aja wak
  // deklarasi variabel
  char operator;
  double angka_pertama;
  double angka_kedua;
  double hasil;

  printf("Masukkan operator (+ - * /) : ");
  scanf("%c", &operator);

  printf("Masukkan angka pertama : ");
  scanf("%lf", &angka_pertama);

  printf("Masukkan angka kedua : ");
  scanf("%lf", &angka_kedua);

  switch (operator) {
  case '+':
    hasil = angka_pertama + angka_kedua;
    printf("\nHasil %.1lf + %.1lf = %.2lf\n", angka_pertama, angka_kedua,
           hasil);
    break;
  case '-':
    hasil = angka_pertama - angka_kedua;
    printf("\nHasil %.1lf - %.1lf = %.2lf\n", angka_pertama, angka_kedua,
           hasil);
    break;
  case '*':
    hasil = angka_pertama * angka_kedua;
    printf("\nHasil %.1lf x %.1lf = %.2lf\n", angka_pertama, angka_kedua,
           hasil);
    break;
  case '/':
    hasil = angka_pertama / angka_kedua;
    printf("\nHasil %.1lf / %.1lf = %.2lf\n", angka_pertama, angka_kedua,
           hasil);
    break;
  default:
    printf("%c tidak valid", operator);
  }

  return 0;
}
