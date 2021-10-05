#include <stdio.h>
#include <string.h>

struct Student {
  char name[15];
  char surname[15];
  int no;
};

int main() {

  struct Student student[2];
  strcpy(student[0].name, "Enes");
  strcpy(student[0].surname, "Ucar");
  student[0].no = 1200;

  strcpy(student[1].name, "Yazılım");
  strcpy(student[1].surname, "Bilimleri");
  student[1].no = 101001;

  for (size_t i = 0; i < 2; i++) {
    printf("%s\n%s\n%d\n\n", student[i].name, student[i].surname, student[i].no);
  }
}
