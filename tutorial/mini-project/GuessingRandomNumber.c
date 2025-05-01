#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  // variabel
  const int MIN = 1;
  const int MAX = 100;
  int angka_user;
  int jumlah_tebakan = 0;
  int jawaban;

  // buat seed angka random dari waktu sekarang
  srand(time(0));

  jawaban = (rand() % MAX) + MIN;
  printf("%d\n", jawaban);

  // looping
  do {
    printf("Masukkan angka tebakan: ");
    scanf("%d", &angka_user);

    if (angka_user > jawaban) {
      printf("Angka terlalu besar\n");
    } else if (angka_user < jawaban) {
      printf("Angka terlalu kecil\n");
    } else {
      printf("Jawaban benar!\n");
    }
    jumlah_tebakan++;
  } while (angka_user != jawaban);

  // output
  printf("========================================\n");
  printf("Angkanya adalah %d\n", jawaban);
  printf("Jumlah tebakan anda %d\n", jumlah_tebakan);
  printf("========================================\n");
}
