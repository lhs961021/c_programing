#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define pi 3.141592

int main(void) {
	
	/*
	//���� 1
	int num1 = 0;
	int num2 = 0;

	printf("2���� ������ �Է��Ͻÿ�: ");
	scanf("%d %d", &num1, &num2);

	printf("��:%d ������:%d", num1/num2, num1%num2);

	
	//���� 2

	double num3 = 0;
	double num4 = 0;

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf %lf", &num3, &num4);

	printf("%lf %lf %lf %lf", num3 + num4, num3 - num4, num3 * num4, num3 / num4);

	

	//���� 3

	int num5, num6, num7, number;

	printf("3���� ������ �Է��Ͻÿ�: ");
	scanf("%d %d %d", &num5, &num6, &num7);

	if (num5 > num6) {
		number = num5;
	}
	else {
		number = num6;
	}

	if (number > num7) {
		printf("�ִ밪: %d", number);
	}
	else {
		printf("�ִ밪: %d", num7);
	}

	

	//���� 4

	int cm = 0;
	int pit = 0;
	double inch = 0;

	printf("Ű�� �Է��Ͻÿ�(cm): ");
	scanf("%d", &cm);

	inch = cm/2.54;
	pit = inch/12;

	printf("%d�� %d��Ʈ %f��ġ�Դϴ�.", cm, pit, inch);
	
	// ���� 5
	int jungsu = 0;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &jungsu);

	int x = 0; 
	int y=0;
	
	x = jungsu / 10;
	y = jungsu - (x * 10);

	printf("�����ڸ�: %d\n",x);
	printf("�����ڸ�: %d",y);
	

	//���� 6
	int num10=0;
	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &num10);

	int reverse_num10 = 0;
	reverse_num10 = ~num10 + 1;


	printf("2�� ����: %d", reverse_num10);
	
	
	//���� 7
	
	int num11 = 0;
	int num12 = 0;
	int num13 = 0;

	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &num11);

	printf("2�� ���ϰ� ���� Ƚ��:");
	scanf("%d", &num12);

	num13 = num11 << num12;
	printf("%d<<%d�� ��: %d", num11, num12, num13);
	*/

	//���� 8
	float r = 0;
	double pyom = 0;
	double choi = 0;

	printf("���� �������� �Է��Ͻÿ�: ");
	scanf("%f", &r);

	pyom = r * r * 4 * pi;
	choi = r * r * r * 4 / 3 * pi;

	printf("ǥ������ %lf�Դϴ�.\n", pyom);
	printf("ü���� %lf�Դϴ�.", choi);



	return 0;

}