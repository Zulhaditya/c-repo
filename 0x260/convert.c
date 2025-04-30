#include <stdio.h>
#include <stdlib.h>

void usage(char *program_name) {
  printf("Penggunaan: %s <pesan> <# diulang beberapa kali>\n", program_name);
  exit(1);
}

int main(int argc, char *argv[]) {
  int i, count;

  if (argc < 3) {   // jika argumen kurang dari 3
    usage(argv[0]); // tampilkan pesan dan exit
  }

  count = atoi(argv[2]); // konversi argumen kedua menjadi integer
  printf("Diulang %d kali...\n", count);

  for (i = 0; i < count; i++) {
    printf("%3d - %s\n", i, argv[1]); // tampilkan argumen pertama
  }
}
