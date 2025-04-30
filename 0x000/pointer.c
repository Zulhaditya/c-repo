#include <stdio.h>

void add_score(int *skor) {
  *skor = *skor + 5;
  printf("Score diubah ke %d\n", *skor);
}

void pointer_array() {
  printf("==== PROGRAM ANTRIAN CS ====\n");

  char no_antrian[5] = {'A', 'B', 'C', 'D', 'E'};

  // menggunakan pointer
  char *ptr_current = &no_antrian;

  for (int i = 0; i < 5; i++) {
    printf("📢 Pelanggan dengan no antrian %c silakan ke loket!\n",
           *ptr_current);
    printf("Saat ini CS sedang melayani: %c\n", *ptr_current);
    printf("-------- Tekan Enter untuk Next --------");
    getchar();
    ptr_current++;
  }

  printf("Selesai.\n");
}

int main() {
  // setiap variabel yang kita buat selalu tersimpan ke dalam memori
  // memori ini dipilih secara acak (RAM)
  // alamat memori ini disebut reference
  // pointer berisi alamat memori

  int a;
  int b[10];

  // %x adalah format string untuk hexadesimal
  printf("Alamat memori untuk variabel a: %x\n", &a);
  printf("Alamat memori untuk variabel b: %x\n", &b);

  int score = 50;
  int hp = 100;

  // membuat pointer dengan isi alamat memori dari hp
  int *ptr_hp = &hp;

  printf("Nama variabel \t Alamat \t Konten\n");
  printf("score \t\t %x \t %d \n", &score, score);
  printf("hp \t\t %x \t %d \n", &hp, hp);
  printf("ptr_hp \t\t %x \t %d \n", &ptr_hp, ptr_hp);
  printf("*ptr_hp \t\t %x \t %d \n", &ptr_hp, *ptr_hp);

  // mengubah data pada alamat memori menggunakan pointer
  *ptr_hp = 95;

  printf("hp \t\t %x \t %d \n", &hp, hp);
  printf("*ptr_hp \t %x \t %d \n", &ptr_hp, *ptr_hp);

  int skor = 0;

  printf("score sebelum diubah: %d\n", skor);
  add_score(&skor);
  add_score(&skor);
  add_score(&skor);
  add_score(&skor);
  add_score(&skor);
  printf("score setelah diubah: %d\n", skor);

  // panggil fungsi pointer_array()
  pointer_array();

  return 0;
}
