#include <stdio.h>

int main(int arg_count, char *arg_list[]) {
  int i;
  printf("Ada %d argumen yang di-input:\n", arg_count);
  for (i = 0; i < arg_count; i++) {
    printf("argumen #%d\t-\t%s\n", i, arg_list[i]);
  }
}
