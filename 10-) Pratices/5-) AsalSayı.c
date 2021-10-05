#include <stdio.h>

int isItPrimeNumber(int x) {
  if (x < 2) {
    return 0;
  }
  else if (x == 2) {
    return 1;
  }

  for (int i = 2; i < x; i++) {
    if (x % i == 0) {
      return 0;
    }
  }

  return 1;
}

int main() {
  printf("-20: %d\n", isItPrimeNumber(-20));
  printf("0: %d\n", isItPrimeNumber(0));
  printf("1: %d\n", isItPrimeNumber(1));
  printf("2: %d\n", isItPrimeNumber(2));
  printf("15: %d\n", isItPrimeNumber(15));
  printf("17: %d\n", isItPrimeNumber(17));
  printf("20: %d\n", isItPrimeNumber(20));
  printf("31: %d\n", isItPrimeNumber(31));

  return 0;
}
