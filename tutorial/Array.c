#include <stdio.h>

int main() {
  // array: struktur data yang menyimpan variabel dengan tipe data yang sama
  // double harga[] = {5000, 6000, 7000}; // index dimulai dari 0
  double harga[5];
  harga[0] = 5000;
  harga[1] = 6000;
  harga[2] = 7000;
  harga[3] = 8000;
  harga[4] = 9000;

  printf("Harga produk = Rp.%.0lf\n", harga[4]);

  printf("%d bytes\n", sizeof(harga)); // 40 bytes
  // looping array
  for (int i = 0; i < sizeof(harga) / sizeof(harga[0]);
       i++) { // 40/8 = 5 panjang array-nya
    printf("%.0lf\n", harga[i]);
  }

  return 0;
}
