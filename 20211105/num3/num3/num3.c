#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int num;
	int ch[20];
	int i;
	int j = 0;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num);


	for (i = 1; i <= num; i++) {
		if (num % i == 0) {
			ch[j] = i;
			j++;
		}
	}

	printf("���: ");
	for (i = 0; i < j; i++) {
		printf("%d ", ch[i]);
	}

	return 0;
}