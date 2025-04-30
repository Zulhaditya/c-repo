#include <stdio.h>

// membuat struct
struct Mahasiswa {
  char *name;
  char *address;
  int age;
};

int main() {
  // menggunakan struct
  struct Mahasiswa mhs1, mhs2;

  // cara untuk mengisi nilai ke struct
  mhs1.name = "Zulhaditya";
  mhs1.address = "Lingga";
  mhs1.age = 24;

  mhs2.name = "Inayah";
  mhs2.address = "Batam";
  mhs2.age = 25;
  // mencetak isi struct
  printf("-- Mahasiswa 1 --\n");
  printf("Nama: %s\n", mhs1.name);
  printf("Alamat: %s\n", mhs1.address);
  printf("Umur: %d\n\n", mhs1.age);

  printf("-- Mahasiswa 2 --\n");
  printf("Nama: %s\n", mhs2.name);
  printf("Alamat: %s\n", mhs2.address);
  printf("Umur: %d\n\n", mhs2.age);

  // nested struct

  struct Weapon {
    char *name;
    int attackPower;
    int range;
  };

  struct Player {
    char *name;
    int healthPoin;
    struct Weapon weapon;
  };

  struct Player player1 = {
      .name = "Ackxle",
      .healthPoin = 100,
      .weapon = {.name = "Katana", .attackPower = 30, .range = 100}};

  // print data player beserta dengan weapon-nya
  printf("== Player Status ==\n");
  printf("Player: %s\n", player1.name);
  printf("HP: %d%\n", player1.healthPoin);
  printf("-- ⚔️ Weapon --\n");
  printf("   Name: %s\n", player1.weapon.name);
  printf("   Attack: %d\n", player1.weapon.attackPower);
  printf("   Range: %d\n", player1.weapon.range);

  return 0;
}
