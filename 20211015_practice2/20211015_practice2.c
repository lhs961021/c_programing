#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	/*
	//���� 1
	char ch;
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf(" %c", &ch);

	if ((ch == 'a') | (ch == 'e') | (ch == 'i') | (ch == 'o') | (ch == 'u')) {
		printf("�����Դϴ�");
	}
	else {
		printf("�����Դϴ�");
	}

	
	//���� 2

	int num1 = 0;
	int num2 = 0;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num1);
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num2);

	if ((num1 % num2) == 0) {
		printf("����Դϴ�.");
	}
	else {
		printf("������ƴմϴ�");
	}
	

	//���� 3
	int num3 = 0;
	int num4 = 0;
	int num5 = 0;
	int num = 0;

	printf("3���� ������ �Է��Ͻÿ�: ");
	scanf("%d %d %d", &num3, &num4, &num5);

	if ((num3 < num4)) {
		num = num3;
	} else {
		num = num4;
	}

	if ((num < num5)) {
		printf("���� ���� ������ %d�Դϴ�", num);
	}
	else {
		printf("���� ���� ������ %d�Դϴ�", num5);
	}
	

	//���� 5

	int height = 0;
	int age = 0;

	printf("Ű�� �Է��Ͻÿ�(cm): ");
	scanf("%d", &height);
	printf("���̸� �Է��Ͻÿ�: ");
	scanf("%d", &age);

	if ((height >= 140) && (age >= 10)) {
		printf("Ÿ�� �����ϴ�");
	}
	else {
		printf("�˼��մϴ�");
	}
	

	//���� 7
	int weight = 0;
	int height = 0;
	double pyo = 0;
	double w = 0;

	printf("ü�߰� Ű�� �Է��ϼ���: ");
	scanf("%d %d", &weight, &height);

	pyo = (height - 100) * 0.9;

	if (weight > pyo) {
		printf("��ü���Դϴ�");
	}
	else {
		printf("��ü���Դϴ�");
	}

	*/
	//����10

	int x = 0;
	int y = 0;

	printf("��ǥ(x,y): ");
	scanf("%d %d", &x, &y);

	if (x > 0 && y > 0)
		printf("1��и�");
	if (x < 0 && y > 0)
		printf("2��и�");
	if (x < 0 && y < 0)
		printf("3��и�");
	if (x > 0 && y < 0)
		printf("4��и�");




	return 0;
}