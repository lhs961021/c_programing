#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){

	int num1, num2;

	printf("��ǥ (x,y): ");
	scanf("%d %d",&num1,&num2);

	if (num1 > 0) {
		if (num2 > 0) {
			printf("1��и�");
		}
		else {
			printf("4��и�");
		}
	}
	else {
		if (num2 > 0) {
			printf("2��и�");
		}
		else {
			printf("3��и�");
		}
	}

	return 0;
}