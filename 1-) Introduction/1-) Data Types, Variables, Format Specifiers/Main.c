#include <stdio.h>

int main() {
  int a1 = 14;
  char b1 = 66;
  char b2 = 'm';
  float c1 = 4.2;
  double d1 = 0.21;

  printf("%d %c %10d %.1f %f \n%s\n", a1, b1, b2, c1 , d1, "Enes Ucar");
  printf("int: %d byte\n", sizeof(int));
  printf("char: %d byte\n", sizeof(char));
  printf("float: %d byte\n", sizeof(float));
  printf("long: %d byte\n", sizeof(long));
  printf("double: %d byte\n", sizeof(double));
  printf("short: %d byte\n", sizeof(short int));

  return 0;
}
