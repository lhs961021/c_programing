#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {

	char ch1;
	int num1, num2;
	int result;

	printf("A---- Add\n");
	printf("S---- Subtract\n");
	printf("M---- Multiply\n");
	printf("D---- Divide\n");
	printf("Q---- Quit\n");
	printf("***************\n");
	

	do
	{
		printf("������ �����Ͻÿ�: ");
		scanf(" %c", &ch1);
		printf("�μ��� �������� �и��Ͽ� �Է��Ͻÿ�: ");
		scanf("%d %d", &num1, &num2);

	} while ((ch1!='A' & ch1!='S' & ch1!='M' & ch1 != 'D' & ch1 != 'Q'));

	switch (ch1)
	{
	case 'A':
		result = num1 + num2;
		printf("%d", result);
		break;
	case 'S':
		result = num1 - num2;
		printf("%d", result);
		break;
	case 'M':
		result = num1 * num2;
		printf("%d", result);
		break;
	case 'D':
		result = num1 / num2;
		printf("%d", result);
		break;
	case 'Q':
		break;
	default:
		break;
	}

	return 0;
}