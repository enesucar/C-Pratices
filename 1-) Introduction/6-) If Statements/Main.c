#include <stdio.h>

int main() {
  int not = 45;

  if (not > 50) {
    printf("Geçti\n");
  }
  else if (not == 50) {
    printf("50 ile Geçti\n");
  }
  else {
    printf("Kaldı");
  }

  return 0;
}
