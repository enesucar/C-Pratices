#include <stdio.h>

int multiply(int matrix[], int size) {
  int value = 1;

  for (int i = 0; i < size; i++) {
    value *= matrix[i];
  }

  return value;
}

int main() {
  int numbers[5] = {1, 2, 3, 4, 5};
  printf("Carpim: %d\n", multiply(numbers, sizeof(numbers) / sizeof(int)));

  return 0;
}
