#include <stdio.h>

int main() {
  int a,b,c,d;

  printf("4 adet sayi giriniz: \n");
  scanf("%d %d %d %d", &a, &b, &c, &d);

  double average = (a + b + c + d) / 4;
  printf("Ortalama: %f", average);

  return 0;
}
