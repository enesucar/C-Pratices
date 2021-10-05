#include <stdio.h>

void readMessage(int code) {
  if (code == 200) {
    printf("OK\n");
  }
  else if (code == 204) {
    printf("No Content\n");
  }
  else if (code == 400) {
    printf("Bad Request\n");
  }
  else if (code == 403) {
    printf("Forbidden\n");
  }
  else {
    printf("Error: Invalid Status Code!\n");
  }
}

int main() {
  readMessage(200);
  readMessage(400);
  readMessage(440);

  return 0;
}
