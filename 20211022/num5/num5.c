#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {

	char id_1[10], ps_1[10];

	printf("���̵� �Է� :");
	scanf("%s", id_1);
	printf("��й�ȣ �Է� :");
	scanf("%s", ps_1);

	if (strcmp(id_1, "student12")==0 && strcmp(ps_1, "st12345")==0){
		printf("�α��� ����!!\n");
		printf("%s���� ȯ���մϴ�.", id_1);
	}
	else 
	{
		if (strcmp(id_1, "student12")!=0) {
			printf("�α��� ����!!\n");
			printf("�������� �ʴ� ���̵��Դϴ�. �ٽ� �Է����ּ���");

		} 
		else {
			printf("�α��� ����!!\n");
			printf("�߸��� ��й�ȣ�Դϴ�. �ٽ� �Է����ּ���");
		}
	}

	return 0;
}