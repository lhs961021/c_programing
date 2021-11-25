#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	int num1;
	int random;
	random = rand() % 3 + 1;

	printf("선택하시오(1: 가위 2: 바위 3: 보)");
	scanf("%d", &num1);

	switch (num1)
	{
	case 1:
		if (random == 1) {
			printf("비김");
			break;
		} 
		else if(random == 2) {
			printf("컴퓨터가 이김");
			break;
		}
		else
		{
			printf("사용자가 이김");
			break;
		}
	case 2:
		if (random == 1) {
			printf("사용자가 이김");
			break;
		}
		else if (random == 2) {
			printf("비김");
			break;
		}
		else
		{
			printf("컴퓨터가 이김");
			break;
		}
	case 3:
		if (random == 1) {
			printf("컴퓨터가 이김");
			break;
		}
		else if (random == 2) {
			printf("사용자가 이김");
			break;
		}
		else
		{
			printf("비김");
			break;
		}
		
	default:
		break;
	}

	printf("\n컴퓨터는 %d 선택", random);


	return 0;
}