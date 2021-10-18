#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define pi 3.141592

int main(void) {
	
	/*
	//문제 1
	int num1 = 0;
	int num2 = 0;

	printf("2개의 정수를 입력하시오: ");
	scanf("%d %d", &num1, &num2);

	printf("몫:%d 나머지:%d", num1/num2, num1%num2);

	
	//문제 2

	double num3 = 0;
	double num4 = 0;

	printf("실수를 입력하시오: ");
	scanf("%lf %lf", &num3, &num4);

	printf("%lf %lf %lf %lf", num3 + num4, num3 - num4, num3 * num4, num3 / num4);

	

	//문제 3

	int num5, num6, num7, number;

	printf("3개의 정수를 입력하시오: ");
	scanf("%d %d %d", &num5, &num6, &num7);

	if (num5 > num6) {
		number = num5;
	}
	else {
		number = num6;
	}

	if (number > num7) {
		printf("최대값: %d", number);
	}
	else {
		printf("최대값: %d", num7);
	}

	

	//문제 4

	int cm = 0;
	int pit = 0;
	double inch = 0;

	printf("키를 입력하시오(cm): ");
	scanf("%d", &cm);

	inch = cm/2.54;
	pit = inch/12;

	printf("%d는 %d피트 %f인치입니다.", cm, pit, inch);
	
	// 문제 5
	int jungsu = 0;

	printf("정수를 입력하시오: ");
	scanf("%d", &jungsu);

	int x = 0; 
	int y=0;
	
	x = jungsu / 10;
	y = jungsu - (x * 10);

	printf("십의자리: %d\n",x);
	printf("일의자리: %d",y);
	

	//문제 6
	int num10=0;
	printf("정수를 입력하시오:");
	scanf("%d", &num10);

	int reverse_num10 = 0;
	reverse_num10 = ~num10 + 1;


	printf("2의 보수: %d", reverse_num10);
	
	
	//문제 7
	
	int num11 = 0;
	int num12 = 0;
	int num13 = 0;

	printf("정수를 입력하시오:");
	scanf("%d", &num11);

	printf("2를 곱하고 싶은 횟수:");
	scanf("%d", &num12);

	num13 = num11 << num12;
	printf("%d<<%d의 값: %d", num11, num12, num13);
	*/

	//문제 8
	float r = 0;
	double pyom = 0;
	double choi = 0;

	printf("구의 반지름을 입력하시오: ");
	scanf("%f", &r);

	pyom = r * r * 4 * pi;
	choi = r * r * r * 4 / 3 * pi;

	printf("표면적은 %lf입니다.\n", pyom);
	printf("체적은 %lf입니다.", choi);



	return 0;

}