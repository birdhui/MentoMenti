#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, sum;
	i = 1;
	sum = 0;
	while (i <= 10) {
		sum = sum + i;
		i++;
	}
	printf("1+%d=%d\n", i, sum);

	return 0;
}