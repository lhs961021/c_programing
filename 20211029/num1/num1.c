#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	char c1;

	printf("���ڸ� �Է��Ͻÿ� :");
	scanf(" %c", &c1);

	switch (c1)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		printf("�����Դϴ�.");
		break;
	default:
		printf("�����Դϴ�.");
		break;
	}

	return 0;
}