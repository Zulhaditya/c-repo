#include <stdbool.h>
#include <stdio.h>

int main() {
  char a = 'A';        // single character cara outputnya: %c
  char b[] = "Ackxle"; // array character atau string cara outputnya: %s

  float c = 3.14568; // 4 bytes (32 bit) jumlahnya 6-7 digit cara outputnya: %f
  double d =
      3.15768920288; // 8 bytes (64 bit) jumlahnya 15-16 digit outputnya: %lf

  bool e = true; // 1 byte (true atau false) outputnya: %d

  char f =
      100; // 1 byte (bisa digunakan untuk -128 to 127 ascii) output: %d atau %c
  unsigned char g = 78; // 1 byte (0 to 255) output: %d atau %c

  short h = 21000;              // 2 bytes (-32.768 to 32.767) outputnya: %d
  unsigned short int i = 65437; // 2 bytes (0 to +65.535) outputnya: %d

  int j = 2128282229; // 4 bytes (-2.157.483 to +2.147.483.547) outputnya: %d
  unsigned int k = 427282920; // 4 bytes (0 to +4.294.967.295) outputnya: %u

  long long int l = 9818181919191919; // 8 bytes (-9 quintillion to +9
                                      // quintillion) output: %lld
  unsigned long long int m =
      1822020202020220202; // 8 bytes (0 to 18+ quintilliion) output: %llu

  // output:
  printf("%c\n", a);
  printf("%s\n", b);
  printf("%f\n", c);
  printf("%0.10lf\n", d);
  printf("%d\n", e);
  printf("%d\n", f);
  printf("%c\n", f);
  printf("%d\n", g);
  printf("%c\n", g);
  printf("%d\n", h);
  printf("%d\n", i);
  printf("%d\n", j);
  printf("%u\n", k);
  printf("%lld\n", l);
  printf("%llu\n", m);

  return 0;
}
