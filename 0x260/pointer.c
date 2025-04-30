#include <stdio.h>
#include <string.h>

int main() {
  char str_a[20]; // 20 element array
  char *pointer;  // pointer untuk setiap karakter array
  char *pointer2; // pointer kedua

  strcpy(str_a, "Hello, world!\n");
  pointer = str_a; // set pointer pertama ke array
  printf(pointer);

  pointer2 = pointer + 2; // set pointer kedua dan tambahkan 2 bytes di depannya
  printf(pointer2);       // tampilkan pointer kedua
  strcpy(pointer2, "y you guys!\n"); // copy kalimat ini ke pointer kedua
  printf(pointer);                   // tampilkan pointer
}
