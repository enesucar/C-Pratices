#include <stdio.h>
#include <string.h>

struct Student {
  char name[15];
  char surname[15];
  int no;
};

int main() {
  struct Student *keep;
  struct Student student;

  strcpy(student.name, "Enes");
  strcpy(student.surname, "Ucar");
  student.no = 1200;

  keep = &student;

  printf("%s\n%s\n%d\n\n", student.name, student.surname, student.no);
  printf("%s\n%s\n%d\n\n", keep->name, keep->surname, keep->no);
}
