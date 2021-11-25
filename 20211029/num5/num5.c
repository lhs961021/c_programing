#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int age, ki;

	printf("키를 입력하세요(cm): ");
	scanf("%d", &ki);
	printf("나이를 입력하세요: ");
	scanf("%d", &age);

	if (age >= 10) {
		if (ki >= 140) {
			printf("타도 좋습니다.");
		}
	}
	else {
		printf("죄송합니다");
	}

	return 0;
}