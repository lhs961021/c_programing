#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int select_max(int n_array[]) {

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

	return n_array[9];
}

int main(void) {

	int num_array[10];
	int i = 0;

	while (i < 10) {

		printf("%d��° ���� �Է�: ", i + 1);
		scanf_s("%d", &num_array[i]);
		i++;
	}

	printf("\n\n�Է��� ���� �� : ");
	for (i = 0; i < 10; i++) {
		printf("%d ", num_array[i]);
	}

	i = select_max(num_array);
	printf("\n\n�ִ밪 : %d\n\n", i);

	for (i = 0; i < 10; i++) {
		printf("%d ", num_array[i]);
	}

}

