#include <stdio.h>

int main() {
  // continue: skip kode yang ada & paksa melanjutkan looping selanjutnya
  // break: keluar dari loop/switch

  for (int i = 1; i <= 20; i++) {
    if (i == 13) {
      // continue; // skip angka 13
      break; // berhenti di angka 13
    }
    printf("%d\n", i);
  }
}
