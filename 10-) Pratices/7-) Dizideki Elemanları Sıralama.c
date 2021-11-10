#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int value[7], i, j;
	value[0] = 15;
	value[1] = 10;
	value[2] = 10;
	value[3] = 20;
	value[4] = 17;
	value[5] = 40;
	value[6] = 40;
	
	for (i = 0; i < 7; i++) {
		for (j = 0; j < 7; j++) {
			if (value[i] > value[j]) {
				int x = value[i];
				value[i] = value[j];
				value[j] = x;
			}
		}	
	}
	
	printf("%d %d %d %d %d %d %d", value[0], value[1], value[2], value[3], value[4], value[5], value[6]);
	return 0;
}
