#include <stdio.h>

int main() {
  // char name[] = "Enes";
  // printf("%c\n", name[2]);

  char name[20];
  printf("Isminizi Giriniz: ");
  gets(name);
  printf("%s\n", name);

  return 0;
}
