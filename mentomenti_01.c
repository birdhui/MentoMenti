#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, sum;
	sum = 0;
	for (i = 0; i < 10; i++)
		sum = sum + i;
		printf("1+%d=%d\n", i, sum);
	
	return 0;
}

// if else / if(�����ϸ� �ѹ��� ����) / while(��� �ݺ� ����) / for(������ Ƚ����ŭ �ݺ�)