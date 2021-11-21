#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int num1, num2, num3;
	int sum;
	float avg;

	printf("3개의 정수를 입력하세요 : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	sum = num1 + num2 + num3;
	avg = (float)sum / 3;

	printf("3개의 정수의 합 : %d\n", sum);
	printf("3개의 정수의 평균 : %.2f", avg);


	return 0;
}