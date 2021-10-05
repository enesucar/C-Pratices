#include <stdio.h>

int main() {
  int type;
  int amount = 1000;
  int money;

  printf("Bakiyeniz: %d\n", amount);
  printf("Islemler: \n1- Para Yatirma\n2- Para Cekme\n3- Kart Iade\n\n");
  printf("Islem tipini yaziniz: ");
  scanf("%d", &type);

  switch (type) {
    case 1:
      printf("Yatirilacak Para: ");
      scanf("%d", &money);
      amount += money;
      printf("Yeni Bakiye: %d", amount);
      break;

    case 2:
      printf("Cekilecek Para: ");
      scanf("%d", &money);

      if (money <= amount) {
        amount -= money;
        printf("Yeni Bakiye: %d", amount);
      }
      else {
        printf("Yetersiz Bakiye!");
      }

      break;

    case 3:
      printf("Kartiniz Iade Edildi!");
      break;

    default:
      printf("Gecersiz Islem!");
      break;
  }

  return 0;
}
