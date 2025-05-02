#include <stdio.h>

int main() {

  FILE *pF = fopen("test.txt", "a"); // w: rewrite, a: appending
  fprintf(pF, "\nInayah");
  fclose(pF);

  // hapus file
  if (remove("test.txt") == 0) {
    printf("File berhasil dihapus!\n");
  } else {
    printf("File gagal dihapus.\n");
  }

  return 0;
}
