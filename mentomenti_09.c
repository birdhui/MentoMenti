#include <stdio.h>

int main(void)
{
	for (int i = 0; i < 5; i++) {
		for (int z = 4; z > i; z--) {
			printf("*");
		}
		printf("*\n");
	}

	return 0;
}

/*
	for (int i = 0; i < 5; i++) {
		for (int z = 4; z > i; z--) {
			printf(" ");
		}
		printf("*****\n");
	}
*/


/*

*****
****
***
**
*
출력하기

*/