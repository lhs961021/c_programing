#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int age, ki;

	printf("Ű�� �Է��ϼ���(cm): ");
	scanf("%d", &ki);
	printf("���̸� �Է��ϼ���: ");
	scanf("%d", &age);

	if (age >= 10) {
		if (ki >= 140) {
			printf("Ÿ�� �����ϴ�.");
		}
	}
	else {
		printf("�˼��մϴ�");
	}

	return 0;
}