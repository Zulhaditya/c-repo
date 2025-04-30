#include <stdio.h>

// membuat fungsi say_hello() dengan parameter name
void say_hello(char name[]) { printf("Hello %s!\n", name); }

// fungsi rumus balok lebih dari satu parameter
void balok(int p, int l, int t) {
  printf("Luas balok adalah = %d\n", p * l * t);
}

// fungsi rumus balok yang mengembalikan nilai/return
int balok_return(int p, int l, int t) { return p * l * t; }

// passing argument by reference
void kali_dua(int *num) { *num = *num * 2; }

void main() {
  say_hello("Muhammad Zulhaditya Hapiz");
  say_hello("Inayah Fitri Wulandari");

  balok(3, 4, 6);
  printf("Luas balok adalah = %d\n", balok_return(5, 10, 15));

  int angka = 9;
  kali_dua(&angka);
  printf("isi variabel angka = %d\n", angka);
}
