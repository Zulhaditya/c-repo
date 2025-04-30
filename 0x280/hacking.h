#ifndef HACKING_H
#define HACKING_H

#include <stddef.h> // For NULL
#include <stdio.h>  // For printf, perror, etc.
#include <stdlib.h> // For exit, malloc, etc.
#include <string.h> // For strcpy, strncat, etc.
#include <unistd.h> // For getuid, read, write, close, etc.

// A function to display an error message and then exit
void fatal(char *message) {
  char error_message[100];
  strcpy(error_message, "[!!] Fatal Error ");
  strncat(error_message, message, 83);
  perror(error_message);
  exit(-1);
}

// A function to safely allocate memory
void *ec_malloc(size_t size) {
  void *ptr = malloc(size);
  if (ptr == NULL)
    fatal("in ec_malloc() on memory allocation");
  return ptr;
}

#endif // HACKING_H
