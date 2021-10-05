#include <stdio.h>

void changeValue(int a, int b) {
  int temp = a;
  a = b;
  b = temp;

  printf("a: %d\tb: %d\n", a, b);
}


int main() {
  int x = 5, y = 10;
  changeValue(x, y);
  printf("x: %d\ty: %d\n", x, y);

  return 0;
}
