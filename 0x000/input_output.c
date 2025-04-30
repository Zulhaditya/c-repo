// fungsi printf untuk menampilkan output ke layar
// digunakan bersamaan dengan format string untuk menampilkan nilai suatu
// variabel
#include <stdio.h>

int main() {
  printf("Halo, ini adalah contoh output\n");

  // %s dan %d adalah contoh format string
  printf("Nama saya %s\n", "Zulhaditya");
  printf("Usia saya %d\n", 24);

  // fungsi puts mirip dengan printf tetapi tidak memerlukan format
  // biasanya digunakan untuk menampilkan teks biasa saja
  puts("Teks ini ditampilkan menggunakan fungsi puts()");

  // fungsi putchar untuk menampilkan satu karakter char saja
  // putchar('x');

  // selanjutnya fungsi input yaitu scanf
  // digunakan sesuai dengan tipe data apa untuk format string
  // simbol & berfungsi untuk mengambil alamat memori dari sebuah variabel
  char name[20], web_address[30];
  printf("Nama: ");
  scanf("%s", &name);

  printf("Alamat Website: ");
  scanf("%s", &web_address);

  printf("\n======================\n");
  printf("Nama kamu: %s\n", name);
  printf("Alamat websitemu: %s\n", web_address);

  // contoh input integer
  int a, b, hasil;
  printf("Input nilai A: ");
  scanf("%i", &a);

  printf("Input nilai B: ");
  scanf("%i", &b);

  hasil = a + b;
  printf("Hasil a + b: %i\n", hasil);

  // fungsi gets digunakan untuk mengambil input dalam satu baris
  // tidak memerlukan format string
  // tetapi jarang digunakan karena bisa menyebabkan buffer overflow

  // char alamat[30];
  // printf("Masukkan alamat anda: ");
  // gets(alamat);
  // printf("Alamat anda: %s\n", alamat);

  // gunakan fgets untuk fungsi input yang lebih aman
  // karena dilengkapi dengan ukuran buffer dan sumber input
  // sehingga lebih terkontrol dan aman
  // char alamat[30];
  // printf("Masukkan alamat anda: ");
  // fgets(alamat, sizeof(alamat), stdin);
  // printf("Alamat anda: %s\n", alamat);

  return 0;
}
