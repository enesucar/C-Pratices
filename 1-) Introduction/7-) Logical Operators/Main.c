#include <stdio.h>

int main() {
  /*
    <
    >
    >=
    <=
    ==
    !=
    &&
    ||
  */

  int not = 70;

  if (not >= 0 && not < 25) {
    printf("Not: 1");
  }
  else if (not >= 25 && not < 45) {
    printf("Not: 2");
  }
  else if (not >= 45 && not < 70) {
    printf("Not: 3");
  }
  else if (not >= 70 && not < 85) {
    printf("Not: 4");
  }
  else if (not >= 85 && not <= 100) {
    printf("Not: 5");
  } else {
    printf("Geçersiz.");
  }
  return 0;
}
