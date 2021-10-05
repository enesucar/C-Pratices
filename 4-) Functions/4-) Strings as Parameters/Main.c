#include <stdio.h>

int getLength(char name[]) {
  int length = 0;

  for (int i = 0; name[i] != '\0'; i++) {
    length++;
  }

  return length;
}

int main() {
  char name[] = "Enes";
  printf("%d\n", getLength(name));
  return 0;
}
