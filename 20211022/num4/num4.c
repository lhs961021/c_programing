#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int num1, num2, num3;
	int sum;
	float avg;

	printf("중간고사 점수 입력 : ");
	scanf("%d", &num1);
	printf("실습고사 점수 입력 : ");
	scanf("%d", &num2);
	printf("기말고사 점수 입력 : ");
	scanf("%d", &num3);

	sum = num1 + num2 + num3;
	avg = (float)sum / 3;

	if (avg >= 90) {
		print("시험점수 학점 : A");
	}
	else if (avg >= 80) {
		print("시험점수 학점 : B");
	}
	else if (avg >= 70) {
		print("시험점수 학점 : C");
	}
	else {
		print("시험점수 학점 : F");
	}

	return 0;
}