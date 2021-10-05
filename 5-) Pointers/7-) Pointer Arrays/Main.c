#include <stdio.h>
#include <string.h>

char *dayName(char *days[], int length, int whichDay) {
  if (whichDay >= 1 && whichDay <= 7) {
    return days[whichDay - 1];
  }
  return NULL;
}

int main() {
  char *days[7] = {"Pazartesi", "salı", "Çarşamba", "Perşembe", "Cuma", "Cumartesi", "Pazar"};
  char *p = dayName(days, 7, 5);
  printf("%s\n", p);
}
