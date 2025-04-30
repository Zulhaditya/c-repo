#include <stdio.h>

// fungsi di c = sekumpulan kode yang akan dieksekusi jika dipanggil
// fungsi biasanya diawali dengan void
// variabel tidak bisa dibaca jika berada diluar function: variable scope
void selamat(char x[], int y) {
  printf("Selamat ulang tahun ya %s wkwkw...\n", x);
  printf("Kamu sekarang sudah %d tahun!\n", y);
}

// return adalah pengembalian nilai
// sesuaikan dengan nilai return nya. double untuk return double.
// void digunakan jika tidak ada value yang di-return
double persegi(double x) {
  // cara biasa
  // double hasil = x * x;
  // return hasil;

  // cara cepat
  return x * x;
}

int main() {

  // variabel
  char nama[] = "Inayah";
  int umur = 24;

  // panggil fungsi selamat() dan jadikan variabel sebagai argumen
  selamat(nama, umur);

  double x = persegi(3.14);
  printf("Luas persegi adalah %.2lf\n", x);

  return 0;
}
