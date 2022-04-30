#include <stdio.h>

int main(void)
{
	for (int i = 0; i < 5; i++) {
		for (int z = 0; z<i+1; z++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

/*

*
**
***
****
*****
출력하기

*/