// 두 자연수 계산하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, plus, minus, mul, diff, rest;

	printf("두 자연수를 입력하시오: ");
	scanf("%d %d", &a, &b);

	plus = a + b; // 더하기
	minus = a - b; // 빼기
	mul = a * b; // 곱하기
	diff = a / b; // 몫
	rest = a % b; // 나머지

	printf("%d\n", plus);
	printf("%d\n", minus);
	printf("%d\n", mul);
	printf("%d\n", diff);
	printf("%d\n", rest);

	return 0;
}