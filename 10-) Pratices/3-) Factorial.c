#include <stdio.h>
#include <math.h>

int main() {
  int i = 1;
  int x;
  int fac = 1;

  printf("Deger Giriniz: ");
  scanf("%d", &x);

  while (i <= x) {
    fac = fac * i;
    i++;
  }

  printf("Sonuc: %d", fac);

  return 0;
}
