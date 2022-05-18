#include <stdio.h>

int main(void)
{
	int i, z, j;
	for (z = 0; z < 5; z++)
	{
		for (i = 5 - z - 1; i > 0; i--)
		{
			printf(" ");
		}
		for (j = 0; j < z + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

/*
	for (int z = 0; z < 5; z++)
	{
		for (int i = 5-z-1; i > 0; i--){
			printf(" ");
		for (int j = 0; j < z; j++)
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
*/

/*
	for (int i = 0; i < 5; i++) {
		for (int z = 4; z > i; z--) {
			printf(" ");
		}
		for (int j = 0; i < 5; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
*/
	
/*
	for (int i = 5; i > 0; i--) {
		for (int z = 4; z > i; z--) {
			printf(" ");
		}
		printf("*****\n");
	}
	return 0;
}
*/

/*
	for (int i = 1; i <= 5; i++) {
		for (int z = 0; z <i; z++) {
			printf("*");
		}
		printf("\n    ");
	}

*/