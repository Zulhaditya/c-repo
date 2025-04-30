#include <stdio.h>
#include <string.h>

int main() {
  // array string
  char cars[][10] = {"Mustang", "Corvette", "BMW", "Camaro"};

  strcpy(cars[0], "Tesla"); // ubah value array Mustang -> Tesla

  for (int i = 0; i < sizeof(cars) / sizeof(cars[0]); i++) {
    printf("%s\n", cars[i]);
  }

  return 0;
}
