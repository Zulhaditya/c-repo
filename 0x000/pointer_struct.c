#include <stdio.h>

void main() {
  struct Player {
    char *name;
    int score;
    int hp;
    struct Weapon *weapon;
  };

  struct Weapon {
    char *name;
    int attack;
    int guard;
  };

  // membuat struct player
  struct Player player;

  // membuat pointer untuk player
  struct Player *player1;
  player1 = &player;

  player1->name = "Ackxle";
  player1->score = 0;
  player1->hp = 100;

  player1->weapon->name = "Katana";
  player1->weapon->attack = 16;
  player1->weapon->guard = 10;

  // cetak status player
  printf("PLAYER STATUS\n");
  printf("Name: %s\n", player1->name);
  printf("Score: %d\n", player1->score);
  printf("HP: %d\n", player1->hp);
  printf("Weapon\n");
  printf("  name: %s\n", player1->weapon->name);
  printf("  attack: %d\n", player1->weapon->attack);
  printf("  guard: %d\n", player1->weapon->guard);
}
