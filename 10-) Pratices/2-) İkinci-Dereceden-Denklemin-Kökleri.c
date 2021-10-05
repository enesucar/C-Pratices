#include <stdio.h>
#include <math.h>

int main() {
  int a, b, c;
  float x1, x2;
  float delta;

  printf("a degerini giriniz: ");
  scanf("%d", &a);

  printf("b degerini giriniz: ");
  scanf("%d", &b);

  printf("c degerini giriniz: ");
  scanf("%d", &c);

  delta = (b * b) - 4 * a * c;
  x1 = (- b + (sqrt(delta))) / 2 * a;
  x2 = (- b - (sqrt(delta))) / 2 * a;

  printf("Denklemin birinci koku: %.2f\n", x1);
  printf("Denklemin ikinci koku: %.2f\n", x2);

  return 0;
}
