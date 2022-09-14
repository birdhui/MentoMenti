// 반복문 정삼각형 별찍기
// 못품
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N, i, j;
	
	printf("출력하고자 하는 정수의 행의 길이를 입력하시오: ");
	scanf("%d", &N);

	for (i = 0; i <= N; i++)
	{
		printf("*");
		for (j = N; j = i; j--);
		printf(" ");
	}
	printf("\n");

	return 0;
}