#include <stdio.h>

void printUmur(int *pUmur) { printf("Kamu berusia %d tahun.\n", *pUmur); }

int main() {

  // pointer:
  // variabel yang mereferensikan memory address ke variabel lain
  // * : indirection operator (value di address tersebut)
  // & : address dari sebuah memory block

  int umur = 24;
  int *pUmur = &umur; // masukkan address umur ke pointer *pUmur

  printf("address dari umur: %p\n", &umur);
  printf("value dari pUmur: %p\n", pUmur);

  printf("size of umur: %d bytes\n", sizeof(umur));
  printf("size of pointer umur: %d bytes\n", sizeof(pUmur));

  printf("nilai dari umur: %d\n", umur);
  printf("nilai yang disimpan: %d\n", *pUmur); // akses value dari pointer

  printUmur(pUmur);

  return 0;
}
