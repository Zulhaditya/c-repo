#include <stdio.h>

int main() {

  int umur;
  char nama[25];

  // tetapkan batas array jika melebihi akan bufferoverflow
  // scanf tidak bisa include spasi/whitespace = single line
  // jadi gunakan fgets(nama_variable, limitnya, stdin) = multiple line
  printf("\nNama anda: ");
  fgets(nama, sizeof(nama), stdin);
  printf("Selamat datang, %s\n", nama);

  // gunakan scanf untuk ambil input dan &umur adalah
  // address pointer dari variabel umur
  printf("\nUmur anda: ");
  scanf("%d", &umur);

  // output
  printf("Kamu sudah lumayan dewasa dengan umur %d.\n", umur);

  return 0;
}
