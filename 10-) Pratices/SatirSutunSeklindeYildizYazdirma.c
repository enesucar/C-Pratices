#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int satir, sutun;
	int i, j;
	
	printf("Satir: ");
	scanf("%d", &satir);
	
	printf("Sutun: ");
	scanf("%d", &sutun);
	
	for (i = 0; i < satir; i++) {
		for (j = 0; j < sutun; j++) {
			if (i == 0 || i == satir - 1) {
				printf("*");
			}
			else if (j == 0 || j == sutun - 1) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		
		printf("\n");
	}
	return 0;
}
