#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {

	int num1, num2;

	char result1[10];
	char result2[10];

	printf("<양수/음수 판별>\n");
	printf("2개의 정수를 입력 :");
	scanf("%d %d", &num1, &num2);

	if (num1 > 0) {
		strcpy(result1, "양수");
	}
	else {
		strcpy(result1, "음수");
	}

	if (num2 > 0) {
		strcpy(result2, "양수");
	}
	else {
		strcpy(result2, "음수");
	}

	if ((result1 && result2) == "양수") {
		printf("두개의 양수 (%d, %d) 입력", num1, num2);
	}
	else if ((result1 && result2) == "음수") {
		printf("두개의 음수 (%d, %d) 입력", num1, num2);
	}
	else {
		printf("1개의 %s(%d)와 1개의 %s(%d)가 입력",result1, num1, result2, num2);
	}


	return 0;
}