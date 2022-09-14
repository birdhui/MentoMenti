// 입출력_체스판 피스 구하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int king, queen, look, bishop, night, phone;
	int a, b, c, d, e, f;

	king = 1;
	queen = 1;
	look = 2;
	bishop = 2;
	night = 2;
	phone = 8;


	printf("정수의 킹과 퀸, 룩, 비숍, 나이트, 폰의 개수를 입력하시오: ");
	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

	printf("%d %d %d %d %d %d\n", king - a, queen - b, look - c, bishop - d, night - e, phone - f);

	return 0;
}