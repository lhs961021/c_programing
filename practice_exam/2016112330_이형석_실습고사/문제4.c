#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int num1, num2, num3 ,result;
	int n = 1;
	char ch1;


	while (n == 1) {
		printf("4Ģ������ �����ϱ� ���� �����͸� �Է��� �ּ���.\n");
		printf("�Է� ������ \"���� ������ ����\"�� ���·� �Է��� �ּ��� : ");
		scanf("%d  %c %d", &num1, &ch1, &num2);

		switch (ch1)
		{
		case '+':
			result = num1 + num2;
			printf("������� : %d + %d = %d\n", num1, num2, result);
			break;
		case '-':
			result = num1 - num2;
			printf("������� : %d - %d = %d\n", num1, num2, result);
			break;
		case '*':
			result = num1 + num2;
			printf("������� : %d * %d = %d\n", num1, num2, result);
			break;
		case '/':
			result = num1 / num2;
			printf("��������� : %d / %d = %d\n", num1, num2, result);
			break;
		default:
			break;
		}

		printf("��Ģ������ ����Ϸ��� 1, �����Ϸ��� 2�� �Է��� �ּ��� : ");
		scanf("%d", &num3);

		n = num3;

	}
	
}
