#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	int num1;
	int random;
	random = rand() % 3 + 1;

	printf("�����Ͻÿ�(1: ���� 2: ���� 3: ��)");
	scanf("%d", &num1);

	switch (num1)
	{
	case 1:
		if (random == 1) {
			printf("���");
			break;
		} 
		else if(random == 2) {
			printf("��ǻ�Ͱ� �̱�");
			break;
		}
		else
		{
			printf("����ڰ� �̱�");
			break;
		}
	case 2:
		if (random == 1) {
			printf("����ڰ� �̱�");
			break;
		}
		else if (random == 2) {
			printf("���");
			break;
		}
		else
		{
			printf("��ǻ�Ͱ� �̱�");
			break;
		}
	case 3:
		if (random == 1) {
			printf("��ǻ�Ͱ� �̱�");
			break;
		}
		else if (random == 2) {
			printf("����ڰ� �̱�");
			break;
		}
		else
		{
			printf("���");
			break;
		}
		
	default:
		break;
	}

	printf("\n��ǻ�ʹ� %d ����", random);


	return 0;
}