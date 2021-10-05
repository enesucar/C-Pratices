#include <stdio.h>
#include <string.h>

int main() {
  // FILE *filep = fopen("deneme.txt", "w");
  // if (filep == NULL) {
  //   printf("Dosya oluşturulamadı!\n");
  // }
  // else {
  //   printf("Dosya oluşturuldu!");
  // }

  FILE *filep = fopen("deneme.txt", "r");
  if (filep == NULL) {
    printf("Dosya yok!\n");
  }
  else {
    printf("Dosya var!");
  }

  return 0;
}
