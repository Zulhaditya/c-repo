#include <stdio.h>
#include <string.h>

int main() {
  char string1[] = "Ina";
  char string2[] = "yah";

  int panjang_string = strlen(string1); // hitung panjang string
  printf("Panjang karakter: %d\n", panjang_string);

  strcat(string1, string2); // tambahkan string2 ke akhir dari string1
  printf("%s\n", string1);

  // tambahkan n character di string2 ke akhir dari string1
  // mulai dari index 1,2,3
  strncat(string1, string2, 2);
  printf("%s\n", string1);

  strcpy(string1, string2); // copy string2 ke string1
  printf("%s\n", string1);

  strncpy(string1, string2, 2); // copy string2 ke string1
  printf("%s\n", string1);

  int bandingkan_string = strcmp(string1, string2);
  // hasilnya -48 karena string tidak sama.
  // jika sama bernilai 0
  printf("%d\n", bandingkan_string);
}
