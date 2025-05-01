#include <stdio.h>

// struct manual
// typedef char user[25];

// struct menggunakan typedef
typedef struct {
  char name[25];
  char password[12];
  int id;
} User;

int main() {
  // typedef: keyword untuk nickname dari sebuah tipe data

  User user1 = {"Ackxle", "root", 7};
  User user2 = {"Inayah", "admin", 1};

  printf("%s\n", user1.name);
  printf("%s\n", user2.name);

  return 0;
}
