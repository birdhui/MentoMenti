#include <stdio.h>

int main()
{
	int i;
	int x = 0;

	for (i = 1; i <= 9; i++) {
		x = 3 * i;
		printf("3 X %d = %d\n", i, x);
	}

	return 0;
}

// for문으로 구구단 3단 만들기