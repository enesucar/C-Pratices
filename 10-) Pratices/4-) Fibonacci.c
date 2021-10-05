#include <stdio.h>

int main() {
  // 1 1 2 3 5 8 13 21 ...

  int a = 1;
  int b = 0;
  int c = 0;

  printf("1\n");

  for (int i = 0; i < 10; i++) {
    c = a;
    a += b;
    b = c;

    printf("%d\n", a);
  }

  return 0;
}
