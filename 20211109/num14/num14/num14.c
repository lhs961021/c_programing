#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double get_distance(double x1, double y1, double x2, double y2);

int main(void) {
	
	double num1, num2, num3, num4, z;
	printf("첫번쨰 점의 좌표를 입력하시오:(x,y)");
	scanf("%lf %lf", &num1, &num2);

	printf("두번쨰 점의 좌표를 입력하시오:(x,y)");
	scanf("%lf %lf", &num3, &num4);

	z = get_distance(num1, num2, num3, num4);
	printf("두점 사이의 거리는 %lf 입니다.", z);


	return 0;
}

double get_distance(double x1, double y1, double x2, double y2) {

	double a = pow(x1 - x2, 2);
	double b = pow(y1 - y2, 2);

	double result = sqrt(a + b);

	return result;
}