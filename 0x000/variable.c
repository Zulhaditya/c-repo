#include <stdio.h>

// konstanta adalah variabel yang nilainya tetap atau tidak bisa diubah
// bisa menggunakan define atau const
#define SEPULUH 10
#define VERSI 1.5
#define JENIS_KELAMIN 'W'

int main() {
  // int berat;
  // int tinggi = 170;

  // mengisi nilai ke variabel
  // berat = 50;

  // mencetak nilai variabel
  // printf("Berat badan saya %ikg dan tinggi %icm\n", berat, tinggi);

  // tipe data

  int usia = 24;
  float berat = 55.7;
  double tinggi = 178.43;
  char jenis_kelamin = 'L';

  // Kita menggunakan %.2f untuk menentukan batas jumlah angka setelah koma.
  // Angka 2 sebelum f artinya dua angka di belakang koma.
  printf("Usia: %i tahun\n", usia);
  printf("Berat: %2.f kg\n", berat);
  printf("Tinggi: %2.f cm\n", tinggi);
  printf("Jenis Kelamin: %c\n", jenis_kelamin);

  // konversi tipe data
  int a = 8;
  int b = 3;

  float c = a / b;
  printf("Hasil a / b = %.2f\n", c); // hasilnya bulat 2.0

  // untuk dapat hasil yang sesuai
  float hasil = (float)a / (float)b;
  printf("Hasil a / b = %.2f\n", hasil); // hasilnya 2.67

  // tampilkan nilai konstanta
  printf("Isi konstanta SEPULUH adalah %i\n", SEPULUH);
  printf("Isi konstanta VERSI adalah %2.f\n", VERSI);
  printf("Isi konstanta JENIS_KELAMIN adalah %c\n", JENIS_KELAMIN);
  return 0;

  // penggunaan const sebagai nilai konstanta
  const double PI = 3.14;
  const char GENDER = 'P';
  const int UPDATE = 11;

  printf("isi konstanta PI adalah %f\n", PI);
  printf("isi konstanta JENIS_KELAMIN adalah %c\n", GENDER);
  printf("isi konstanta VERSI adalah %i\n", UPDATE);
}
