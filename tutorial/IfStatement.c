#include <stdio.h>

int main() {
  int umur;

  printf("Umur anda: ");
  scanf("%d", &umur);

  if (umur >= 17) {
    printf("Halo, kamu berhasil sign-up.\n");
  } else if (umur == 0) {
    printf("Kamu baru saja lahir. gagal sign-up wkwkwk\n");
  } else if (umur < 0) {
    printf("Maaf, kamu belum lahir ke dunia ini:(\n");
  } else {
    printf("Kamu belum cukup umur loh, pergi sana!\n");
  }
  return 0;
}
