#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {

	int num1, num2;

	char result1[10];
	char result2[10];

	printf("<���/���� �Ǻ�>\n");
	printf("2���� ������ �Է� :");
	scanf("%d %d", &num1, &num2);

	if (num1 > 0) {
		strcpy(result1, "���");
	}
	else {
		strcpy(result1, "����");
	}

	if (num2 > 0) {
		strcpy(result2, "���");
	}
	else {
		strcpy(result2, "����");
	}

	if ((result1 && result2) == "���") {
		printf("�ΰ��� ��� (%d, %d) �Է�", num1, num2);
	}
	else if ((result1 && result2) == "����") {
		printf("�ΰ��� ���� (%d, %d) �Է�", num1, num2);
	}
	else {
		printf("1���� %s(%d)�� 1���� %s(%d)�� �Է�",result1, num1, result2, num2);
	}


	return 0;
}