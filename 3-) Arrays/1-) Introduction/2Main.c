#include <stdio.h>

int main() {
  float numbers[5];

  for (int i = 0; i < 5; i++) {
    printf("Sayi Giriniz: ");
    scanf("%f", &numbers[i]);
  }

  printf("\n");

  for (int i = 0; i < 5; i++) {
    printf("%f\n", numbers[i]);
  }

  return 0;
}
