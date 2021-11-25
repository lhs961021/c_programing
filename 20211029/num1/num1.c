#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	char c1;

	printf("문자를 입력하시오 :");
	scanf(" %c", &c1);

	switch (c1)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		printf("모음입니다.");
		break;
	default:
		printf("자음입니다.");
		break;
	}

	return 0;
}