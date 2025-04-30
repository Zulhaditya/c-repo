#include <stdio.h>

int main() {
  // do while loop: eksekusi kode sekali, lalu cek kondisi true/false
  int number = 0;
  int sum = 0;

  do { // jalankan ini sekali
    printf("Masukkan angka diatas 0: ");
    scanf("%d", &number);
    if (number > 0) {
      sum += number;
    }
  } while (number > 0); // jika true maka akan kembali ke atas

  printf("Penjumlahan: %d\n", sum);

  return 0;
}
