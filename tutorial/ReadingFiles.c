#include <stdio.h>

int main() {
  FILE *pF = fopen("src/puisi.txt", "r");
  char buffer[255];

  if (pF == NULL) {
    printf("Gagal membuka file!\n");
  } else {
    while (fgets(buffer, 255, pF) != NULL) {
      printf("%s", buffer);
    }
  }

  fclose(pF);

  return 0;
}
