#include <stdio.h>

int main() {
  // int numbers[] = {1, 2, 3, 4, 5};
  // //printf("%d\n", numbers[2]);
  //
  // for (int i = 0; i < 5; i++) {
  //   printf("%d\n", numbers[i]);
  // }


  // ==================================

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
