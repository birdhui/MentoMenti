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

// if else / if(만족하면 한번만 실행) / while(계속 반복 실행) / for(정해진 횟수만큼 반복)