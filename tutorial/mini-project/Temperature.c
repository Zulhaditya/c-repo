#include <ctype.h>
#include <stdio.h>

int main() {

  char unit;
  float temp;

  printf("\nApakah suhu formatnya (F) atau (C): ");
  scanf("%c", &unit);

  // konversi char unit ke uppercase
  unit = toupper(unit);

  if (unit == 'C') {
    printf("Inputkan suhu dalam (C)elcius: ");
    scanf("%f", &temp);
    temp = (temp * 9 / 5) + 32;
    printf("\nSuhu Fahrenheit-nya: %.1f\n", temp);

  } else if (unit == 'F') {
    printf("Inputkan suhu dalam (F)ahrenheit: ");
    scanf("%f", &temp);
    temp = ((temp - 32) * 5) / 9;
    printf("\nSuhu Celcius-nya: %.1f\n", temp);

  } else {
    printf("%c tidak valid!\n", unit);
  }
  return 0;
}
