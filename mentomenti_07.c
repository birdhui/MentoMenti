#include <stdio.h>

int main(void)
{
	for (int i = 0; i < 1; i++) {
		for (i = 0; i < 0; i++)
		{
			printf("*");
		}
		printf("*\n");
	}
	for (int i = 0; i < 2; i++) {
		for (i = 0; i < 1; i++)
		{
			printf("*");
		}
		printf("*\n");
	}
	for (int i = 0; i < 3; i++) {
		for (i = 0; i < 2; i++)
		{
			printf("*");
		}
		printf("*\n");
	}
	for (int i = 0; i < 4; i++) {
		for (i = 0; i < 3; i++)
		{
			printf("*");
		}
		printf("*\n");
	}
	for (int i = 0; i < 5; i++) {
		for (i = 0; i < 4; i++)
		{
			printf("*");
		}
		printf("*\n");
	}

	return 0;
}