#include <stdio.h>
#include <string.h>

char *returnChar(char *p, int index) {
  int length = strlen(p);

  if (index > length) {
      return NULL;
  }
  else {
    return p + index;
  }
}

int main() {
  char array[] = "yazilim";
  char *p = returnChar(array, 2);

  if (p == NULL) {
    printf("NULL");
  }
  else {
    printf("%s\n", p);
  }
}
