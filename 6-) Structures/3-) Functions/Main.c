#include <stdio.h>
#include <string.h>

struct Student {
  char name[15];
  char surname[15];
  int no;
};

struct Student getData() {
  struct Student student;
  strcpy(student.name, "Enes");
  strcpy(student.surname, "Ucar");
  student.no = 1200;
  return student;
}

int main() {
  struct Student student = getData();
  printf("%s\n%s\n%d\n\n", student.name, student.surname, student.no);
}
