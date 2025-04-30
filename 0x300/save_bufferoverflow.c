#include <stdio.h>
#include <string.h>

void safe_function(char *input) {
  char buffer[8];
  strncpy(buffer, input, sizeof(buffer) - 1); // Membatasi panjang salinan
  buffer[sizeof(buffer) - 1] = '\0';          // Memastikan null-terminator
  printf("Buffer: %s\n", buffer);
}

int main() {
  char large_input[16] = "AAAAAAAAAAAAAAA";
  safe_function(large_input);
  return 0;
}
