#include <stdio.h>

enum Day { Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thru = 5, Fri = 6, Sat = 7 };

int main() {
  // enum: definisi nama dari tipe data integer
  // untuk mempermudah membaca kode
  // tipenya konstant

  enum Day today = Sun;

  printf("%d\n", today); // output = 1

  if (today == Sun || today == Sat) {
    printf("Ini waktunya liburan!\n");
  } else {
    printf("Saatnya bekerja.\n");
  }
}
