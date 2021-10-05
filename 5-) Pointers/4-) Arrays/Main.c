#include <stdio.h>


int main() {
  int numbers[5] = {1, 2, 3, 4, 5};
  int *p = numbers;

  // printf("%u\n", p);
  // printf("%u\n", p + 1);

  printf("%d\n", *p);
  printf("%d\n", *(p + 1));

  return 0;
}
