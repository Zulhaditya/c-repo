#include <stdio.h>

int findMax(int x, int y) {
  // cara if/else biasa
  // if (x > y) {
  //   return x;
  // } else {
  //   return y;
  // }

  // ternary merupakan operator shortcut perbandingan if/else
  // (kondisi) ? nilai true : nilai false
  return (x > y) ? x : y;
}

int main() {

  int max = findMax(5, 4);
  printf("%d", max);
  return 0;
}
