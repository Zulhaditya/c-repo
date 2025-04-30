#include <stdio.h>

int main() {
  int int_var = 5;
  int *int_ptr;

  int_ptr = &int_var;

  printf("int_ptr = 0x%08x\n", int_ptr);
  printf("&int_ptr = 0x%08x\n", &int_ptr);
  printf("*int_ptr = 0x%08x\n", *int_ptr);

  printf("int_var terletak di 0x%08x dan nilainya %d\n", &int_var, int_var);
  printf("int_ptr terletak di 0x%08x dan nilainya 0x%08x, mengarah ke %d\n\n",
         &int_ptr, int_ptr, *int_ptr);
}
