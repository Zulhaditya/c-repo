#include <stdio.h>

int main() {
  // variable adalah tempat penyimpanan memori
  // harus didefinisikan data type-nya lalu inisialisasi nilainya

  int x; // ini deklarasi integer
  x = 7;

  int y = 31; // gabungan deklarasi dan inisialiasi

  int age = 24;                            // integer
  float gpa = 3.67;                        // float
  char grade = 'A';                        // single character. tidak ada string
  char pacar[] = "Inayah Fitri Wulandari"; // array character atau string
  char nama[] = "Zulhaditya Hapiz";        // array character atau string

  // cara display value dari variabel
  printf("Kamu berumur %d\n", age);                // %d = desimal output
  printf("Nilai ipk kamu adalah %f\n", gpa);       // %f = float output
  printf("Nilai pemrograman C kamu: %c\n", grade); // %c = char output
  printf("Nama pacarmu: %s\n", pacar);             // %s = string output

  // gabungan
  printf("Nama kamu %s dan sekarang berpacaran dengan %s\n", nama, pacar);

  return 0;
}
