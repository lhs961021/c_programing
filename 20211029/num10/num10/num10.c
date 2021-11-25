#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){

	int num1, num2;

	printf("좌표 (x,y): ");
	scanf("%d %d",&num1,&num2);

	if (num1 > 0) {
		if (num2 > 0) {
			printf("1사분면");
		}
		else {
			printf("4사분면");
		}
	}
	else {
		if (num2 > 0) {
			printf("2사분면");
		}
		else {
			printf("3사분면");
		}
	}

	return 0;
}