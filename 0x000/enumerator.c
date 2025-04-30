#include <stdio.h>

// enumerator digunakan untuk menyimpan konstanta
enum hari { SENIN, SELASA, RABU, KAMIS, JUMAT, SABTU, MINGGU };

// membuat tipe data boolean dengan enumerator
enum boolean { false, true };

void main() {
  enum hari sekarang;
  sekarang = RABU;
  printf("Sekarang hari ke-%d\n", sekarang);

  int a = 4;
  int b = 5;

  if (a < b == true) {
    printf("variabel a < b\n");
  }

  // implementasi flags/penanda menggunakan enumerator
  enum Permission { READ = 1, WRITE = 2, DELETE = 4 };
  int balance = 0;

  // set flags dengan operasi bitwise or
  enum Permission userPermission = READ | WRITE;
  if (userPermission & WRITE) {
    printf("Anda boleh mengisi saldo!\n");
    balance += 100;
  }

  printf("Saldo: %i\n", balance);
}
