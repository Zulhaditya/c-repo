#include <stdio.h>

// fungsi prototype: deklarasi fungsi tanpa body sebelum fungsi main()
// memastikan fungsi untuk dipanggil dengan argumen yang benar
// CATATAN PENTING:
// 1. c compiler tidak check parameter yang sesuai
// 2. lupa memasukkan argumen akan menghasilkan behavior yang aneh
// 3. fungsi protoype menyebabkan compiler untuk memberikan flag error jika
//    ada argumen yang kurang/salah
void halo(char[], int);

int main() {

  char nama[] = "Ackxle";
  int umur = 24;

  halo(nama, umur);
  return 0;
}

void halo(char nama[], int umur) {
  printf("Halo %s\n", nama);
  printf("Kamu %d tahun.\n", umur);
}
