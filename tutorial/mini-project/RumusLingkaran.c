#include <stdio.h>

int main() {

  const double PI = 3.14159;
  double radius;
  double keliling_lingkaran;

  printf("\nRadius lingkaran: ");
  scanf("%lf", &radius);

  // rumus keliling lingkaran: 2 * PI * r
  keliling_lingkaran = 2 * PI * radius;
  printf("Keliling lingkaran: %lf\n", keliling_lingkaran);

  // rumus luas lingkaran: PI * r * r
  double luas_lingkaran = PI * radius * radius;
  printf("Luas lingkaran: %f\n", luas_lingkaran);

  return 0;
}
