#include <stdio.h>
#include <string.h>
struct Address {
  char neighbourhood[15];
  char street[15];
};

struct Student {
  char name[15];
  char surname[15];
  int no;
  int age;
  struct Address address;
};

int main() {
  //struct Student student = {"Ahmet" , "Uçar", 569, 14};

  struct Student student;
  strcpy(student.name, "Enes");
  strcpy(student.surname, "Ucar");
  student.no = 1200;
  student.age = 17;
  strcpy(student.address.neighbourhood, "Zeytinburnu");
  strcpy(student.address.street, "7. cadde");

  printf("%s\n%s\n%d\n%d\n%s\n%s", student.name, student.surname, student.no, student.age, student.address.neighbourhood, student.address.street);
}
