#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	/*
	//문제 1
	char ch;
	printf("문자를 입력하시오: ");
	scanf(" %c", &ch);

	if ((ch == 'a') | (ch == 'e') | (ch == 'i') | (ch == 'o') | (ch == 'u')) {
		printf("모음입니다");
	}
	else {
		printf("자음입니다");
	}

	
	//문제 2

	int num1 = 0;
	int num2 = 0;

	printf("정수를 입력하시오: ");
	scanf("%d", &num1);
	printf("정수를 입력하시오: ");
	scanf("%d", &num2);

	if ((num1 % num2) == 0) {
		printf("약수입니다.");
	}
	else {
		printf("약수가아닙니다");
	}
	

	//문제 3
	int num3 = 0;
	int num4 = 0;
	int num5 = 0;
	int num = 0;

	printf("3개의 정수를 입력하시오: ");
	scanf("%d %d %d", &num3, &num4, &num5);

	if ((num3 < num4)) {
		num = num3;
	} else {
		num = num4;
	}

	if ((num < num5)) {
		printf("제일 작은 정수는 %d입니다", num);
	}
	else {
		printf("제일 작은 정수는 %d입니다", num5);
	}
	

	//문제 5

	int height = 0;
	int age = 0;

	printf("키를 입력하시오(cm): ");
	scanf("%d", &height);
	printf("나이를 입력하시오: ");
	scanf("%d", &age);

	if ((height >= 140) && (age >= 10)) {
		printf("타도 좋습니다");
	}
	else {
		printf("죄송합니다");
	}
	

	//문제 7
	int weight = 0;
	int height = 0;
	double pyo = 0;
	double w = 0;

	printf("체중과 키를 입력하세요: ");
	scanf("%d %d", &weight, &height);

	pyo = (height - 100) * 0.9;

	if (weight > pyo) {
		printf("과체중입니다");
	}
	else {
		printf("저체중입니다");
	}

	*/
	//문제10

	int x = 0;
	int y = 0;

	printf("좌표(x,y): ");
	scanf("%d %d", &x, &y);

	if (x > 0 && y > 0)
		printf("1사분면");
	if (x < 0 && y > 0)
		printf("2사분면");
	if (x < 0 && y < 0)
		printf("3사분면");
	if (x > 0 && y < 0)
		printf("4사분면");




	return 0;
}