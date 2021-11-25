/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int num;
	printf("출력할 별의 갯수를 입력하시오:");
	scanf("%d", &num);
	
	int n_array[5];
	int i, j, temp;

	for (i = 0; i < 5; i++) {
		for (j = i + 1; j < 5; j++) {
			if (n_array[i] > n_array[j]) {
				temp = n_array[i];
				n_array[i] = n_array[j];
				n_array[j] = temp;
			}
		}
	}

	return 0;
}
*/