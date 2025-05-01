#include <stdio.h>

struct Student {
  char name[12];
  float gpa;
};

int main() {
  // array di struct

  struct Student student1 = {"Inayah", 3.2};
  struct Student student2 = {"Wulandari", 3.4};
  struct Student student3 = {"Zulhaditya", 3.3};
  struct Student student4 = {"Hapiz", 3.7};

  struct Student students[] = {student1, student2, student3, student4};
  for (int i = 0; i < sizeof(students) / sizeof(students[0]); i++) {
    printf("%s\n", students[i].name);
    printf("%f\n", students[i].gpa);
  }

  return 0;
}
