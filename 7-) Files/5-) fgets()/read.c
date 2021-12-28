#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *filep = fopen("not.txt", "r");
	char dizi[100];
	
	fgets(dizi, 100, filep);
	printf("%s", dizi);

	return 0;
}