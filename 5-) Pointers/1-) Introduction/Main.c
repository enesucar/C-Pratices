#include <stdio.h>

int main() {
  // int i = 5;
  // int *p = &i;
  //
  // printf("%u\n", p);
  // printf("%u\n", *p);


  // ===========================================================


  // int a = 5, *ap;
  // float b = 3.2, *bp;
  // double c = 3.412, *cp;
  // char d = 'a', *dp;
  // int numbers[5] = {1, 2, 3, 4, 5}, *np;
  //
  // ap = &a;
  // bp = &b;
  // cp = &c;
  // dp = &d;
  // np = &numbers[1];
  //
  // printf("%d adresindeki tam sayinin degeri: %d\n", ap, *ap);
  // printf("%d adresindeki floatin degeri: %f\n", bp, *bp);
  // printf("%d adresindeki doublenin degeri: %lf\n", cp, *cp);
  // printf("%d adresindeki charin degeri: %c\n", dp, *dp);
  // printf("%d adresindeki arrayin[1] degeri: %d\n", np, *np);

  // ===========================================================

  int i, j = 1;
  int *jp1, *jp2 = &j;

  jp1 = jp2;
  i = ++(*jp2);
  *jp2 = *jp1 + i;

  printf("i = %d\nj = %d\njp1 = %d\njp2 = %d ", i, j, jp1, jp2);

  return 0;
}
