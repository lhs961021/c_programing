#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int num1, num2, num3, num4;
	int i,j;
	int n = 1;


	while (n == 1) {
		printf("�޴��� �����ϼ���.\n");
		printf("====================\n");
		printf("1. ���ϴ� �� ���\n");
		printf("2. 3�ܾ� ���� ���\n");
		printf("3. ���� ���\n");
		printf("4. ���α׷� ����\n");
		printf("====================\n");
		printf("�޴����� : ");
		scanf("%d", &num1);

		switch (num1)
		{
		case 1:
			printf("����� �� �Է� : ");
			scanf("%d", &num2);
			printf("%d�� ���\n", num2);
			for (i = 1; i <= 9; i++) {
				printf("%d X %d = %d\n", num2, i, (num2 * i));
			}
			break;
		case 2:
			for (i = 1; i <= 2; i++) {
				for (j = 1; j <= 9; j++) { 
					printf("%d X %d = %d\t", (i*3)-1, j, (((i * 3) - 1 )*j));
					printf("%d X %d = %d\t", (i * 3), j, ((i * 3) * j));
					printf("%d X %d = %d\t", (i * 3) + 1, j, (((i * 3) + 1) * j));
					printf("\n");
				}
			}
			for (j = 1; j <= 9; j++) {
				printf("8 X %d = %d\t", 8, j, (8 * j));
				printf("9 X %d = %d\t", 9, j, (9 * j));
				printf("\n");
			}
			break;
		case 3:
			printf("���۴� �Է� : ");
			scanf("%d", &num3);
			printf("������ �� �Է� : ");
			scanf("%d", &num4);

			for (i = num3; i <= num4; i++) {
				for (j = 1; j <= 9; j++) {
					printf("%d X %d = %d\n", i, j, (i * j));
				}
			}
			break;
		case 4:
			n = 0;
			break;
		default:
			break;
		}

	}
	
}

