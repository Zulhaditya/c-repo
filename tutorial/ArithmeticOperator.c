#include <math.h>
#include <stdio.h>

int main() {
  // operator aritmatika

  // + : penjumlahan
  // - : pengurangan
  // * : perkalian
  // / : pembagian
  // % : modulus
  // ++ : increment
  // -- decrement

  int p = 5;
  int l = 4;

  int luas_persegi = p * l;
  printf("Luas persegi dari panjang %dcm dan lebar %dcm = %dcm\n", p, l,
         luas_persegi);

  int a = 10;
  float t = 2.5;

  float rumus_segitiga1 = 1;
  float rumus_segitiga2 = 2;
  float luas_segitiga = (rumus_segitiga1 / rumus_segitiga2) * a * t;
  printf("Luas segitiga dengan alas %dcm dan tinggi %.1fcm = %.1fcm\n", a, t,
         luas_segitiga);

  int mahasiswa1 = 55;
  int mahasiswa2 = 60;
  int mahasiswa3 = 90;

  // (float) (mahasiswa dll) digunakan untuk konversi nilai int ke float
  float rata_rata_mahasiswa = (float)(mahasiswa1 + mahasiswa2 + mahasiswa3) / 3;
  printf("Nilai rata-rata mahasiswa adalah %.2f\n", rata_rata_mahasiswa);

  // augmented assignment operator
  int x = 10;

  x = x + 2; // cara biasa
  x += 2;    // cara augmented

  printf("Nilai x adalah %d\n", x);
  return 0;
}
