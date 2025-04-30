#include <math.h>
#include <stdio.h>

int main() {

  double A = sqrt(9);    // akar dari 9
  double B = pow(2, 4);  // 2 pangkat 4
  int C = round(3.14);   // pembulatan biasa
  int D = ceil(3.14);    // pembulatan ke atas
  int E = floor(3.14);   // pembulatan ke bawah
  double F = fabs(-100); // nilai absolut dari -100
  double G = log(3);     // nilai log 3
  double H = sin(45);    // nilai sin 45
  double I = cos(45);    // nilai cos 45
  double J = tan(45);    // nilai tan 45

  // output
  printf("%1.f\n", A);
  printf("%1.f\n", B);
  printf("%1.d\n", C);
  printf("%1.d\n", D);
  printf("%1.d\n", E);
  printf("%1.f\n", F);
  printf("%f\n", G);
  printf("%f\n", H);
  printf("%f\n", I);
  printf("%f\n", J);

  return 0;
}
