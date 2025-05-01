#include <stdio.h>
#include <string.h>

struct Player {
  char name[12];
  int score;
};

int main() {

  // struct: koleksi dari beberapa variabel dengan tipe data yang berbeda
  // disimpan dalam satu blok memori
  // sama dengan class pada beberapa bahasa lain (tetapi tidak memiliki method)
  struct Player player1;
  struct Player player2;

  strcpy(player1.name,
         "Ackxle");  // isi value di struct Player pada variable name
  player1.score = 4; // isi value di struct Player pada variable score

  strcpy(player2.name, "Lexiria");
  player2.score = 7;

  // output
  printf("%s\n", player1.name);
  printf("%d\n", player1.score);
  printf("%s\n", player2.name);
  printf("%d\n", player2.score);

  return 0;
}
