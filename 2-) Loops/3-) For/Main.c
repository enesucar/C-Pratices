#include <stdio.h>

int main() {
  int i;
  int j;

  for (i = 0; i < 10; i++) {
    printf("%d\n", i);
  }

  for (i = 0, j = 0; i < 10 && j < 5; i++, j++) {
    printf("%d\n", i);
  }

  return 0;
}
