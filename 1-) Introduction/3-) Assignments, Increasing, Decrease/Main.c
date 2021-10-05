#include <stdio.h>

int main() {
  int x = 5;
  int y = 7;
  int a = 2;

  x = y;
  y =  x + a + 1;

  printf("%d\n", y);
  printf("%d\n", x++);
  printf("%d\n", x);
  printf("%d\n", ++a);
  printf("%d\n", --y);

  x += 1;
  printf("%d\n", x);

  x = y = a + 1;
  printf("%d\n", x);
  printf("%d\n", y);
  printf("%d\n", a);

  return 0;
}
