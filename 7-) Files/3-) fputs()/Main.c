#include <stdio.h>
#include <string.h>

int main() {
  char data[25] = "\nselam";
  FILE *filep = fopen("deneme.txt", "a");

  if (filep == NULL) {
    printf("Dosya oluşturulamadı!\n");
  }
  else {
    fputs(data, filep);
    printf("Yazdırıldı!");
    fclose(filep);
  }

  return 0;
}
