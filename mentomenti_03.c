#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, z;
	z = 0;

	printf("i의 값을 입력해주세요: ");
	scanf("%d", &i);

	for (i=i; ; i++)
		z = i * i;
		printf("%d : %d\n", i, z);

	return 0;
}
// for문은 마지막 값을 알 때 사용
// continue = if문이랑 엮어서 사용
// break