#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *filep = fopen("not.txt", "r");
	char ch;
	while (ch != EOF) {
		ch = fgetc(filep);
		printf("%c", ch);
	}

	return 0;
}