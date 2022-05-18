#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1;

	printf("정수값을 입력해주세요: ");
	scanf("%d", &num1);
	printf("제곱값은 %d입니다. \n", square(num1));
}
int square(int num1)
{
	return(num1 * num1);
}
/* 선언, 정의, 호출
   변수 1개 입력
   제곱값을 구해서 출력 */