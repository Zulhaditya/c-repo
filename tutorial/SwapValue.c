#include <stdio.h>
#include <string.h>

int main() {
  char x[] = "water";
  char y[] = "lemon";
  char temp[15];

  strcpy(temp, x);
  strcpy(x, y);
  strcpy(y, temp);

  printf("x = %s\n", x);
  printf("y = %s\n", y);

  return 0;
}
