#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int num;
	int ch[20];
	int i;
	int j = 0;

	printf("정수를 입력하시오: ");
	scanf("%d", &num);


	for (i = 1; i <= num; i++) {
		if (num % i == 0) {
			ch[j] = i;
			j++;
		}
	}

	printf("약수: ");
	for (i = 0; i < j; i++) {
		printf("%d ", ch[i]);
	}

	return 0;
}