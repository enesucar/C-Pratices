#include <stdio.h>
#include <string.h>

int main() {
  char data[25] = "Yazılım Bilimi";
  int length = strlen(data);
  FILE *filep = fopen("deneme.txt", "w");

  if (filep == NULL) {
    printf("Dosya oluşturulamadı!\n");
  }
  else {
    for (int i = 0; i < length; i++) {
      fputc(data[i], filep);
      printf("Yazilan karakter: %c\n", data[i]);
    }
    printf("Dosya başarıyla yazdırıldı!");
  }

  return 0;
}
