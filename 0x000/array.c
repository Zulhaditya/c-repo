#include <stdio.h>

void main() {
  // array harus didefinisikan panjangnya
  char huruf[5] = {'a', 'b', 'c', 'd', 'e'};
  printf("Huruf: %c\n", huruf[2]);

  // mengisi ulang nilai array
  huruf[2] = 'z';
  printf("Huruf: %c\n", huruf[2]);

  // membuat array kosong
  int nilai[5];
  nilai[0] = 1;
  nilai[1] = 2;
  nilai[2] = 3;
  nilai[3] = 4;
  nilai[4] = 5;

  // mencetak isi array secara manual
  // printf("Nilai ke-1: %d\n", nilai[0]);
  // printf("Nilai ke-2: %d\n", nilai[1]);
  // printf("Nilai ke-3: %d\n", nilai[2]);
  // printf("Nilai ke-4: %d\n", nilai[3]);
  // printf("Nilai ke-5: %d\n", nilai[4]);

  // mencetak isi array menggunakan perulangan
  for (int i = 0; i < 5; i++) {
    printf("Nilai ke-%d: %d\n", nilai[i], nilai[i]);
  }

  printf("\n");

  // menentukan panjang array secara otomatis
  int length = sizeof(nilai) / sizeof(*nilai);
  for (int i = 0; i < length; i++) {
    printf("Nilai ke-%d: %d\n", nilai[i], nilai[i]);
  }

  printf("Banyaknya isi array: %d\n", length);

  // program menghitung rata-rata tinggi badan
  int tinggi_badan[10] = {175, 165, 166, 157, 184, 156, 163, 176, 171, 169};

  // length = n
  int n = sizeof(tinggi_badan) / sizeof(*tinggi_badan);
  int sum = 0;

  for (int i = 0; i < n; i++) {
    sum += tinggi_badan[i];
  }

  float rata_rata = (float)sum / (float)n;
  printf("Rata-rata tinggi badan: %.2f\n", rata_rata);

  // array multidimensi atau biasa dikenal sebagai matrix
  int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  // tampilkan indeks ke (1,0)
  printf("Isi data pada indeks ke-(1,0): %d\n", matrix[1][0]); // hasilnya 4
}
