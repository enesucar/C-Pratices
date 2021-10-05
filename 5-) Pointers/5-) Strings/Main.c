#include <stdio.h>
#include <string.h>

int getLength(char *p) {
  int length = 0;
  for (int i = 0; p[i] != '\0'; i++)
    length++;
  return length;
}

int main() {
  char text[] = "tura";
  printf("%d\n", getLength(text));

  return 0;
}
