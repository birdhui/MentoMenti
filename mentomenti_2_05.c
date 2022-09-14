// 반복문_구구단 N단 출력하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int dan, num;
	num = 1;
	printf("구하고자 하는 구구단의 단을 입력하시오: ");
	scanf("%d", &dan);

	/*
	for (num = 1; num < 10; num++);
	{
		printf("%d * %d = %d\n", N, num,(N*num));
	}
	*/
	// for문 왜 안되지

	while (num <= 9)
	{
		printf("%d * %d = %d\n", dan, num, (dan * num));
		num++;
	}
	return 0;
}