#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	/* 
	// 7��
	int num = 0;
	int num1 = 0;
	int result = 0;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num);
	printf("2�� ���ϰ� ���� Ƚ��: ");
	scanf("%d", &num1);

	result = num << num1;
	
	printf("%d<<%d�� ��: %d", num, num1, result);
	

	//10��
	int num2 = 0;
	int num3 = 0;

	printf("x ��ǥ�� �Է��Ͻÿ�: ");
	scanf("%d", &num2);
	printf("y ��ǥ�� �Է��Ͻÿ�: ");
	scanf("%d", &num3);
	
	(num2 > 0 && num3 > 0) ? printf("1��и�") : printf("");
	(num2 < 0 && num3 > 0) ? printf("2��и�") : printf("");
	(num2 < 0 && num3 < 0) ? printf("3��и�") : printf("");
	(num2 > 0 && num3 < 0) ? printf("4��и�") : printf("");
	

	//11��
	int num4=0;
	double num5=0;
	double r = 0;

	printf("�Ÿ��� �Է��Ͻÿ�: ");
	scanf("%d", &num4);
	printf("������ �Է��Ͻÿ�: ");
	scanf("%lf", &num5);

	r = sin(num5) / num4;

	printf("������ �������� %lf",r);
	*/

	//12��
	char ch, ch1, ch2, ch3;
	unsigned int ch4 = 0;



	printf("ù��° ���ڸ� �Է��Ͻÿ�: ");
	scanf(" %c", &ch);

	printf("�ι�° ���ڸ� �Է��Ͻÿ�: ");
	scanf(" %c", &ch1);

	printf("����° ���ڸ� �Է��Ͻÿ�: ");
	scanf(" %c", &ch2);

	printf("�׹�° ���ڸ� �Է��Ͻÿ�: ");
	scanf(" %c", &ch3);

	ch4 = ch | (ch1 << 8) | (ch2 << 16) | (ch3 << 24);

	printf("�����: %x", ch4);
	
	

	return 0;
}