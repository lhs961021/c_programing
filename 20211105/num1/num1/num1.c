#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int num1;
	int i;

	printf("ī������ �ʱⰪ�� �Է��Ͻÿ�");
	scanf("%d", &num1);

	for (i = num1; i <= num1; i--) {
		printf("%d ", i);
		if (i == 1) {
			printf("\a");
			break;
		}
	}

	return 0;
}