// 조건문_시험 점수 등급 매기기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int score;
	char a, b, c, d, f;
	a = 65;
	b = 66;
	c = 67;
	d = 68;
	f = 70;

	printf("시험 점수를 입력하시오: ");
	scanf("%d", &score);

	if ((score >= 90) && (score <= 100))
	{
		printf("%c\n", a);
	}
	else if ((score >= 80) && (score <= 89))
	{
		printf("%c\n", b);
	}
	else if ((score >= 70) && (score <= 79))
	{
		printf("%c\n", c);
	}
	else if ((score >= 60) && (score <= 69))
	{
		printf("%c\n", d);
	}

	else {
		printf("%c\n", f);
	}

	/*
	if ((score >= 90) && (score <= 100))
	{
		printf("%c\n", a);
		if ((score >= 80) && (score <= 89))
		{
			printf("%c\n", b);
		}
		if ((score >= 70) && (score <= 79))
		{
			printf("%c\n", c);
		}
		if ((score >= 60) && (score <= 69))
		{
			printf("%c\n", d);
		}
	}
	*/

	return 0;
}