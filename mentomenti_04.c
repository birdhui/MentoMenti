#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, z;
	i = 0;
	z = 0;

	printf("i의 값을 입력해주세요: ");
	scanf("%d", &i);

	while (i <= 10) {
		z = i * i;
		printf("%d : %d\n", i, z);
		i++;
	}

	return 0;
}
// 끝을 모를 때 반복해야할 때 사용
// i++ / ++i / int i=0; 
// while 블록 안에 printf 사용하면 그 값까지만 반복
// 블록 밖에 사용하면 마지막 값만 출력