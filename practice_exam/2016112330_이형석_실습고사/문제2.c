#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int acending_power(int n_array[]);
int acending_order(int n_array[]);

int main(void) {

	int num_array[10];
	int i = 0;
	int select;
	
	printf("�ߺ����� ���� ���� 10���� �Է��� �ּ���.\n");

	while (i < 10) {

		printf("%d��° ���� �Է�: ", i + 1);
		scanf_s("%d", &num_array[i]);

		if (num_array[i] == num_array[i-1]) {
			printf("�ߺ��� ���ڰ� �ԷµǾ����ϴ�. �ٽ� �Է��� �ּ���.\n");
			printf("%d��° ���� �Է�: ", i + 1);
			scanf_s("%d", &num_array[i]);
			i++;
		}
		else {
			i++;
		}
		

	} 

	printf("���� ������ ������ �ּ���(�������� : 1, �������� : 2) : ");
	scanf("%d", &select);

	if (select == 1) {
		
		printf("�������� ���İ��\n");

		printf("�Է¼��� : ");
		for (i = 0; i < 10; i++) {
			printf("%d ", num_array[i]);
		}

		printf("\n");

		printf("�������� : ");
		i = acending_power(num_array);
		for (i = 0; i < 10; i++) {
			printf("%d ", num_array[i]);
		}
	}
	else {
		
		printf("�������� ���İ��\n");

		printf("�Է¼��� : ");
		for (i = 0; i < 10; i++) {
			printf("%d ", num_array[i]);
		}

		printf("\n");
		
		printf("�������� : ");

		i = acending_order(num_array);
		for (i = 0; i < 10; i++) {
			printf("%d ", num_array[i]);
		}
	}
	
}

int acending_power(int n_array[]) {

	int i = 0, j, temp;

	while (i < 10) {
		j = i + 1;
		while (j < 10) {
			if (n_array[i] > n_array[j]) {
				temp = n_array[i];
				n_array[i] = n_array[j];
				n_array[j] = temp;
			}
			j++;
		}
		i++;
	}

}

int acending_order(int n_array[]) {

	int i = 0, j, temp;

	while (i < 10) {
		j = i + 1;
		while (j < 10) {
			if (n_array[i] < n_array[j]) {
				temp = n_array[i];
				n_array[i] = n_array[j];
				n_array[j] = temp;
			}
			j++;
		}
		i++;
	}

}
