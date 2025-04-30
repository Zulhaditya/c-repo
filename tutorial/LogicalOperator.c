#include <stdbool.h>
#include <stdio.h>

int main() {
  // && operator = jika dua kondisi bernilai true maka true sisanya false
  float temp = 36;
  bool matahari = true;

  if (temp >= 0 && temp <= 36 && matahari) { // ini keduanya bernilai true
    printf("\nCuaca hari ini cerah bro!\n");
  } else {
    printf("\nCuaca sangat buruk.\n");
  }

  // || operator = jika satu kondisi bernilai true maka true, sisanya false

  float umur = 25;
  bool tua = false;

  if (umur >= 15 || umur <= 30 && tua) { // true, true, dan false = true
    printf("Kamu menginjak masa remaja\n");
  } else {
    printf("Kamu tua cok!\n");
  }

  // ! = kebalikan dari sebuah statement
  bool cerah = true;

  if (!cerah) {
    printf("Sebentar lagi akan hujan.\n");
  } else {
    printf("Cuaca sangat bagus nih!\n");
  }
  return 0;
}
