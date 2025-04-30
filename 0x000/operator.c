#include <stdio.h>

void main() {
  int a, b;

  printf("Nilai a: ");
  scanf("%i", &a);

  printf("Nilai b: ");
  scanf("%i", &b);

  // operator aritmatika
  printf("Hasil a + b = %i\n", a + b);
  printf("Hasil a - b = %i\n", a - b);
  printf("Hasil a * b = %i\n", a * b);
  printf("Hasil a / b = %i\n", a / b);
  printf("Hasil a modulo b = %i\n", a % b);

  // operator penugasan
  b += a; // sama seperti b = b + a
  printf("Hasil b += a adalah %d\n", b);

  b -= a; // sama seperti b = b - a
  printf("Hasil b += a adalah %d\n", b);

  // operator pembanding
  // menghasilkan nilai 1 jika true, kalau false bernilai 0
  int x = 6;
  int y = 9;

  printf("x = %d\n", x);
  printf("y = %d\n", y);

  printf("x > y = %d\n", x > y);
  printf("x < y = %d\n", x < y);
  printf("x >= y = %d\n", x >= y);
  printf("x <= y = %d\n", x <= y);
  printf("x == y = %d\n", x == y);
  printf("x != y = %d\n", x != y);

  // operator logika
  int j = 1; // true
  int k = 0; // false

  printf("j = %d\n", j);
  printf("k = %d\n", k);

  // logika AND
  printf("j && k = %d\n", j && k);

  // logika OR
  printf("j || k = %d\n", j || k);

  // logika NOT
  printf("j! = %d\n", !j);

  // operator bitwise
  int bitwise_a = 6; // 6 dalam biner = 0110
  int bitwise_b = 3; // 3 dalam biner = 0010

  // bitwise menggunakan AND = menghasilkan nilai true jika variable true
  printf("a & b = %d\n",
         bitwise_a & bitwise_b); // hasilnya 2 dalam biner = 0010

  // bitwise menggunakan OR = menghasilkan nilai false jika saat keduanya false
  printf("a & b = %d\n",
         bitwise_a | bitwise_b); // hasilnya 7 dalam biner = 0111

  // bitwise menggunakan XOR = menghasilkan nilai 1 saat kedua nilai tak sama
  printf("a ^ b = %d\n",
         bitwise_a ^ bitwise_b); // hasilnya 7 dalam biner = 0111

  // bitwise NOT = menghasilkan nilai terbalik dari biner aslinya
  printf("~a = %d\n", ~bitwise_a);

  // bitwise LEFTSHIFT = menghasilkan nilai biner yang digeser ke kiri
  printf("a << 1 = %d\n", bitwise_a << 1);

  // bitwise RIGHTSHIFT = menghasilkan nilai biner yang digeser ke kanan
  printf("a >> 1 = %d\n\n", bitwise_a >> 1);

  // POINTER
  unsigned int *pA = 5;

  // ambil alamat memori dari pointer A
  printf("alamat memori variabel pA = %x\n", &pA);

  // TERNARY
  int ternary_a = 7;

  printf("ternary_a > 1 adalah %s\n", a > 1 ? "benar" : "salah");

  // increment dan decrement
  int increment_a = 4;
  int decrement_b = 8;

  // increment a
  increment_a++;

  printf("increment_a = %d\n", increment_a);

  // increment a
  ++increment_a;

  printf("increment_a = %d\n", increment_a);

  // decrement b
  decrement_b--;

  printf("decrement_b = %d\n", decrement_b);

  // decrement a
  --decrement_b;

  printf("decrement_b = %d\n", decrement_b);
}
