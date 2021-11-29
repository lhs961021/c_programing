#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int acending_power(int n_array[]);
int acending_order(int n_array[]);

int main(void) {

	int num_array[10];
	int i = 0;
	int select;
	
	printf("중복되지 않은 숫자 10개를 입력해 주세요.\n");

	while (i < 10) {

		printf("%d번째 숫자 입력: ", i + 1);
		scanf_s("%d", &num_array[i]);

		if (num_array[i] == num_array[i-1]) {
			printf("중복된 숫자가 입력되었습니다. 다시 입력해 주세요.\n");
			printf("%d번째 숫자 입력: ", i + 1);
			scanf_s("%d", &num_array[i]);
			i++;
		}
		else {
			i++;
		}
		

	} 

	printf("정렬 기준을 선택해 주세요(오름차순 : 1, 내림차순 : 2) : ");
	scanf("%d", &select);

	if (select == 1) {
		
		printf("오름차순 정렬결과\n");

		printf("입력순서 : ");
		for (i = 0; i < 10; i++) {
			printf("%d ", num_array[i]);
		}

		printf("\n");

		printf("오름차순 : ");
		i = acending_power(num_array);
		for (i = 0; i < 10; i++) {
			printf("%d ", num_array[i]);
		}
	}
	else {
		
		printf("내림차순 정렬결과\n");

		printf("입력순서 : ");
		for (i = 0; i < 10; i++) {
			printf("%d ", num_array[i]);
		}

		printf("\n");
		
		printf("내림차순 : ");

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
