#include <stdio.h>
#include <string.h>

void reverse(char name[]) {
  char temp[strlen(name)];

  for (int i = 0; i < strlen(name); i++) {
    temp[i] = name[strlen(name) - 1 - i];
  }

  printf("%s", temp);
}

int main() {
  char name[] = "Enes";
  reverse(name);
  return 0;
}
