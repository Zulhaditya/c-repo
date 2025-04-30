#include <stdio.h>
#include <string.h>

int main() {
  char nama[25];
  printf("\nNama kamu siapa? : ");
  fgets(nama, sizeof(nama), stdin);
  nama[strlen(nama) - 1] = '\0';

  // while loop = pengulangan kode tanpa ada batas/unlimited
  // jika kondisi bernilai true maka jalankan terus program-nya
  // jika false maka tidak akan di-eksekusi
  while (strlen(nama) == 0) { // cek jika user tidak menginputkan nama
    printf("Kamu tidak menginputkan namamu loser!\n");
    printf("\nNama kamu siapa? : ");
    fgets(nama, sizeof(nama), stdin);
    nama[strlen(nama) - 1] = '\0';
  }

  printf("Halo, %s\n", nama);
  return 0;
}
