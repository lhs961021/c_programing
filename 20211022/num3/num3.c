#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int num1, num2, num3;
	int sum;
	float avg;

	printf("3���� ������ �Է��ϼ��� : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	sum = num1 + num2 + num3;
	avg = (float)sum / 3;

	printf("3���� ������ �� : %d\n", sum);
	printf("3���� ������ ��� : %.2f", avg);


	return 0;
}