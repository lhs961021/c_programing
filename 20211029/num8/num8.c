#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int num1, num2;

	printf("���� �ð��� ���̸� �Է��Ͻÿ�(�ð�, ����): ");
	scanf("%d %d", &num1, &num2);

	if (num1 <= 17) {
		if ((num2 <= 12) | (num2 >= 65)) {
			printf("����� 25000�Դϴ�");
		}
		else {
			printf("����� 34000�Դϴ�");
		}
	}
	else {
		printf("����� 10000�Դϴ�");
	}


	return 0;
}