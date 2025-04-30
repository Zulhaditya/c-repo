#include <stdio.h>
#include <string.h>

void vulnerable_function(char *input) {
  char buffer[8];        // Buffer hanya dialokasikan 8 byte
  strcpy(buffer, input); // Menyalin input ke buffer tanpa memeriksa panjangnya
  printf("Buffer: %s\n", buffer);
}

int main() {
  char large_input[16] = "AAAAAAAAAAAAAAA"; // Input lebih besar dari buffer
  vulnerable_function(large_input);
  return 0;
}
