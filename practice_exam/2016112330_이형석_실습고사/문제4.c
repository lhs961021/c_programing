#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int num1, num2, num3 ,result;
	int n = 1;
	char ch1;


	while (n == 1) {
		printf("4칙연산을 수행하기 위한 데이터를 입력해 주세요.\n");
		printf("입력 순서는 \"숫자 연산자 숫자\"의 형태로 입력해 주세요 : ");
		scanf("%d  %c %d", &num1, &ch1, &num2);

		switch (ch1)
		{
		case '+':
			result = num1 + num2;
			printf("덧셈결과 : %d + %d = %d\n", num1, num2, result);
			break;
		case '-':
			result = num1 - num2;
			printf("뺄셈결과 : %d - %d = %d\n", num1, num2, result);
			break;
		case '*':
			result = num1 + num2;
			printf("곱셈결과 : %d * %d = %d\n", num1, num2, result);
			break;
		case '/':
			result = num1 / num2;
			printf("나눗셈결과 : %d / %d = %d\n", num1, num2, result);
			break;
		default:
			break;
		}

		printf("사칙연산을 계속하려면 1, 종료하려면 2를 입력해 주세요 : ");
		scanf("%d", &num3);

		n = num3;

	}
	
}
