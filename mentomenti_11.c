#include <stdio.h>

int main(void)
{
	int i, z, j;
	for (z = 0; z < 5; z++)
	{
		for (i = 5- z - 1; i > 0; i--)
		{
			printf(" ");
		}
		for (j = 0; j < i; j++)
		{
			printf("*");
		}
		for (j = 0; j < z + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}