#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	/* 
	// 7번
	int num = 0;
	int num1 = 0;
	int result = 0;

	printf("정수를 입력하시오: ");
	scanf("%d", &num);
	printf("2를 곱하고 싶은 횟수: ");
	scanf("%d", &num1);

	result = num << num1;
	
	printf("%d<<%d의 값: %d", num, num1, result);
	

	//10번
	int num2 = 0;
	int num3 = 0;

	printf("x 좌표를 입력하시오: ");
	scanf("%d", &num2);
	printf("y 좌표를 입력하시오: ");
	scanf("%d", &num3);
	
	(num2 > 0 && num3 > 0) ? printf("1사분면") : printf("");
	(num2 < 0 && num3 > 0) ? printf("2사분면") : printf("");
	(num2 < 0 && num3 < 0) ? printf("3사분면") : printf("");
	(num2 > 0 && num3 < 0) ? printf("4사분면") : printf("");
	

	//11번
	int num4=0;
	double num5=0;
	double r = 0;

	printf("거리를 입력하시오: ");
	scanf("%d", &num4);
	printf("각도를 입력하시오: ");
	scanf("%lf", &num5);

	r = sin(num5) / num4;

	printf("지구의 반지름은 %lf",r);
	*/

	//12번
	char ch, ch1, ch2, ch3;
	unsigned int ch4 = 0;



	printf("첫번째 문자를 입력하시오: ");
	scanf(" %c", &ch);

	printf("두번째 문자를 입력하시오: ");
	scanf(" %c", &ch1);

	printf("세번째 문자를 입력하시오: ");
	scanf(" %c", &ch2);

	printf("네번째 문자를 입력하시오: ");
	scanf(" %c", &ch3);

	ch4 = ch | (ch1 << 8) | (ch2 << 16) | (ch3 << 24);

	printf("결과값: %x", ch4);
	
	

	return 0;
}