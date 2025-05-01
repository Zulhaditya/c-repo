#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  // seed angka random dari waktu sekarang
  srand(time(0));

  int number1 =
      (rand() % 20) + 1; // rand() generate angka dari 1-12 karena ada modulo

  int number2 = (rand() % 20) + 1;
  //
  int number3 = (rand() % 20) + 1;

  printf("%d\n", number1);
  printf("%d\n", number2);
  printf("%d\n", number3);

  return 0;
}
