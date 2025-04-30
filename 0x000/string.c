#include <stdio.h>
#include <string.h>

void main() {
  // membuat string menggunakan tipe data char didalam array
  char title[] = "Belajar Bahasa C";
  char title_copy[20];

  // strcpy = copy string title ke title_copy
  strcpy(title_copy, title);

  printf("isi title copy: %s\n", title_copy);

  // strcat = menambahkan string dari belakang
  char nama[] = "Muhammad Zulhaditya Hapiz";
  char gelar[] = ", S.Kom";

  strcat(nama, gelar);
  printf("Nama lengkap: %s\n", nama);

  // strleng = menghitung panjang string
  int panjang_nama = strlen(nama);
  printf("Panjang nama: %d karakter\n", panjang_nama);

  // strcmp = membandingkan string
  char str1[] = "Zulhaditya";
  char str2[] = "Zulhaditya";
  int hasil;

  hasil = strcmp(str1, str2);

  if (hasil == 0) {
    printf("str1 dan str2 sama\n");
  } else {
    printf("str1 dan str2 berbeda\n");
  }

  // strchr = mencari satu karakter di string lainnya
  char name[] = "Zulhaditya Hapiz";
  char huruf = 'a';
  char *result;

  printf("Mencari huruf '%c' dalam nama...\n", huruf);
  // mencari huruf
  result = strchr(name, huruf);

  while (result != NULL) {
    printf("Ditemukan pada huruf ke-%d\n", result - name + 1);
    result = strchr(result + 1, huruf);
  }

  // strstr = mencari string di string lainnya
  // biasanya dikombinasikan dengan strncpy untuk mencari dan mengubah teks
  char str[] = "Petani code!";
  char *hasil_strstr;

  // cari kata "code"
  hasil_strstr = strstr(str, "code");

  // lalu ubah kata "code" menjadi "kode"
  strncpy(hasil_strstr, "kode", 4);

  puts(str);
}
