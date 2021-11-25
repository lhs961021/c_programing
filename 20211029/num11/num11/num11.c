#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	char ch1;

	printf("문자를 입력하시오 : ");
	scanf(" %c", &ch1);

	switch(ch1)
	{
	case 'R':
	case 'r':
		printf("Rectangle");
		break;
	case 'T':
	case 't':
		printf("Triangle");
		break;
	case 'c':
	case 'C':
		printf("Circle");
		break;
	default:
		printf("Unknown");
		break;
	}

	return 0;

}