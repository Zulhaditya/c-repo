#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h> // Untuk close()

void usage(char *prog_name, char *filename) {
  printf("Penggunaan: %s < data ditambahkan ke %s>\n", prog_name, filename);
  exit(0);
}

// fungsi check error
void fatal(char *);

// fungsi check error menggunakan malloc()
void *ec_malloc(unsigned int);

int main(int argc, char *argv[]) {
  int fd; // file descriptor
  char *buffer, *datafile;

  buffer = (char *)ec_malloc(100);
  datafile = (char *)ec_malloc(20);
  strcpy(datafile, "/tmp/notes");

  if (argc < 2)               // jika tidak ada argumen di command line
    usage(argv[0], datafile); // tampilkan fungsi usage dan exit

  strncpy(buffer, argv[1], 99); // copy ke buffer, pastikan tidak overflow
  buffer[99] = '\0'; // Pastikan null-terminated
  printf("[DEBUG] buffer @ %p: \'%s\'\n", buffer, buffer);
  printf("[DEBUG] datafile @ %p: \'%s\'\n", datafile, datafile);

  strcat(buffer, "\n"); // tambahkan baris baru di-akhir

  // buka file
  fd = open(datafile, O_WRONLY | O_CREAT | O_APPEND, S_IRUSR | S_IWUSR);
  if (fd == -1)
    fatal("pada fungsi main() membuka file");
  printf("[DEBUG] file descriptor adalah %d\n", fd);

  // menulis data
  if (write(fd, buffer, strlen(buffer)) == -1)
    fatal("pada fungsi main() menulis buffer ke file");

  // close file
  if (close(fd) == -1)
    fatal("pada fungsi main() file di-close");

  printf("Note berhasil disimpan!.\n");
  free(buffer);
  free(datafile);
  return 0; // Menambahkan return 0 untuk menunjukkan program berakhir dengan sukses
}

// A function to display an error message and then exit
void fatal(char *message) {
  char error_message[100];
  strcpy(error_message, "[!!] Fatal Error ");
  strncat(error_message, message, 83);
  perror(error_message);
  exit(-1);
}

// An error-checked malloc() wrapper function
void *ec_malloc(unsigned int size) {
  void *ptr;
  ptr = malloc(size);
  if (ptr == NULL)
    fatal("in ec_malloc() on memory allocation");
  return ptr;
}