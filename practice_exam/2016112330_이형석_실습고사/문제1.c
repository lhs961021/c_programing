#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int result[100];
	int num1, num2, num3;
	int i;
	int j = 0;

	printf("���� ���� �Է� : ");
	scanf("%d", &num1);
	printf("������ ���� �Է� : ");
	scanf("%d", &num2);
	printf("��� �Է� : ");
	scanf("%d", &num3);


	for (i = num1; i <= num2; i++) {
		if (i % num3 == 0) {
			result[j] = i;
			j++;
		}
	}
	printf("%d�� ��� �� %d ��\n", num3, j);
	for (i = 0; i < j; i++) {
		if (i == (j - 1)) {
			printf("%d", result[i]);
		}
		else {
			printf("%d, ", result[i]);
		}
	}

	return 0;
}

