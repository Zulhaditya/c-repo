#include <stdio.h>

// fungsi di c = sekumpulan kode yang akan dieksekusi jika dipanggil
// fungsi biasanya diawali dengan void
// variabel tidak bisa dibaca jika berada diluar function: variable scope
void selamat(char x[], int y) {
  printf("Selamat ulang tahun ya %s wkwkw...\n", x);
  printf("Kamu sekarang sudah %d tahun!\n", y);
}

int main() {

  // variabel
  char nama[] = "Inayah";
  int umur = 24;

  // panggil fungsi selamat() dan jadikan variabel sebagai argumen
  selamat(nama, umur);

  return 0;
}
