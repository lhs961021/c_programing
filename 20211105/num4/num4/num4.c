#include <stdio.h>

int main(void) {

	int num = 7;
	int j;
	int i;

	for (i = 1; i <= num; i++) {

		for (j = num; j >= i; j--) {
			printf(" ");
		}

		for (int k = 1; k <= i; k++) {
			printf("*");
		}

		printf("\n");
		
	}


	return 0;
}