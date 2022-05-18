#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double square(double num1)
{

	printf("%lf\n", num1);
	return(num1 * num1);
}

int main(void)
{
	double num1;

	printf("실수값을 입력해주세요: ");
	scanf("%lf", &num1);
	printf("%lf\n", num1);
	printf("실수의 제곱값은 %f입니다. \n", square(num1));
	return 0;
}

// 함수 선언 위에서 해줘도 됨.