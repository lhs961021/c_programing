#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int num1, num2;

	printf("현재 시간과 나이를 입력하시오(시간, 나이): ");
	scanf("%d %d", &num1, &num2);

	if (num1 <= 17) {
		if ((num2 <= 12) | (num2 >= 65)) {
			printf("요금은 25000입니다");
		}
		else {
			printf("요금은 34000입니다");
		}
	}
	else {
		printf("요금은 10000입니다");
	}


	return 0;
}