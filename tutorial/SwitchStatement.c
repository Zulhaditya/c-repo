#include <stdio.h>

int main() {
  char nilai;

  printf("Nilai anda: ");
  scanf("%c", &nilai);

  switch (nilai) {
  case 'A':
    printf("mantap sekali boy!\n");
    break;
  case 'B':
    printf("b aja lah.\n");
    break;
  case 'C':
    printf("oy mepet cok.\n");
    break;
  case 'D':
    printf("belajar lagi lah tolol.\n");
    break;
  case 'E':
    printf("lu gada harapan mending ngulang.");
  default:
    printf("masukkan nilai ujian-mu A-B-C-D-E.\n");
  }

  return 0;
}
