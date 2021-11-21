#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {

	char id_1[10], ps_1[10];

	printf("아이디 입력 :");
	scanf("%s", id_1);
	printf("비밀번호 입력 :");
	scanf("%s", ps_1);

	if (strcmp(id_1, "student12")==0 && strcmp(ps_1, "st12345")==0){
		printf("로그인 성공!!\n");
		printf("%s고객님 환영합니다.", id_1);
	}
	else 
	{
		if (strcmp(id_1, "student12")!=0) {
			printf("로그인 실패!!\n");
			printf("존재하지 않는 아이디입니다. 다시 입력해주세요");

		} 
		else {
			printf("로그인 실패!!\n");
			printf("잘못된 비밀번호입니다. 다시 입력해주세요");
		}
	}

	return 0;
}