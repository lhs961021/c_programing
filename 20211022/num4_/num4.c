#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int num1, num2, num3;
	int sum;
	float avg;

	printf("�߰���� ���� �Է� : ");
	scanf("%d", &num1);
	printf("�ǽ���� ���� �Է� : ");
	scanf("%d", &num2);
	printf("�⸻��� ���� �Է� : ");
	scanf("%d", &num3);

	sum = num1 + num2 + num3;
	avg = (float)sum / 3;

	printf("�������� ���� : %d\n", sum);
	printf("�������� ��� : %.2f\n", avg);

	if (avg >= 90) {
		printf("�������� ���� : A");
	}
	else {
		if (avg >= 80) {
			printf("�������� ���� : B");
		}
		else {
			if (avg >= 70) {
				printf("�������� ���� : C");
			}
			else {
				printf("�������� ���� : F");
			}

		}
	}

	return 0;
}