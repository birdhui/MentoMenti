#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num, result;
	num = 0;
	result = 0;

	printf("정수값을 입력해주세요: ");
	scanf("%d", &num);
	prime(num);
	//나머지가 0이면 약수의 개수를 증가
	}

int prime(int num)
{
	for (int result = 1; result <= num; result++)
	{
		if (num == 2) {
			printf("%d는 소수입니다.\n", num);
		}
		else {
			printf("%d는 소수가 아닙니다.\n", num);
		}
	}
	return num;
}