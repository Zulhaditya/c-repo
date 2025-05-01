#include <stdio.h>

int main() {

  char pertanyaan[][100] = {
      "1. Apa aset yang termasuk crypto?",
      "2. Aplikasi apa yang digunakan untuk menabung aset crypto?",
      "3. Siapa nama penemu teknologi Bitcoin?"};

  char pilihan[][100] = {
      "A. Emas",        "B. Properti",     "C. Bitcoin",
      "D. Reksadana",   "A. BRI Mobile",   "B. Pintu",
      "C. BRK Syariah", "D. BCA Mobile",   "A. Satoshi Nakamoto",
      "B. Elon Musk",   "C. Donald Trump", "D. Prabowo"};

  char jawaban[3] = {'C', 'B', 'A'};
  int jumlah_pertanyaan = sizeof(pertanyaan) / sizeof(pertanyaan[0]);
  int score = 0;
  char jawaban_user;

  for (int i = 0; i < jumlah_pertanyaan; i++) {
    printf("\n%s\n", pertanyaan[i]);
    printf("===========================================================\n");

    for (int j = (i * 4); j < (i * 4) + 4; j++) {
      printf("%s\n", pilihan[j]);
    }

    printf("\nJawaban (A/B/C/D): ");
    scanf(" %c", &jawaban_user);

    // konversi jawaban user ke uppercase
    if (jawaban_user >= 'a' && jawaban_user <= 'd') {
      jawaban_user -= 32;
    }

    if (jawaban_user == jawaban[i]) {
      printf("Benar!\n");
      score++;
    } else {
      printf("Salah! Jawaban yang benar adalah %c.\n", jawaban[i]);
    }
  }

  printf("\n===========================================================\n");
  printf("Kuis Selesai! Skor Anda: %d/%d\n", score, jumlah_pertanyaan);
  printf("===========================================================\n");

  return 0;
}
