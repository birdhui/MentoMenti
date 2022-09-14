// 함수_두 개의 정수 더하고 리턴하는 add함수, *찍기
// 함수 익숙해질 때까지 복습하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
// 01 문제
int get_integer() // 함수 정의
{
	int value;
	printf("정수를 입력하시오: ");
	scanf("%d", &value);
	return value;
}
int add(int num1, int num2) 
{
	return num1 + num2;
}
int main() // 함수 호출
{
	int num1 = get_integer();
	int num2 = get_integer();

	int sum = add(num1, num2);
	printf("두 수의 합은 %d입니다. \n", sum);
	return 0;
}
*/;

// 02 문제
int star(int i, int j); // 함수 선언

int main() // 함수 호출
{
	int j=5;

	printf("*\n", star(j));

	return 0;
}

int star(int i, int j) // 함수 정의
{
	for (i = 0; i <= j; i++);
	{
		printf("*\n");
	}
	
	return star;
}