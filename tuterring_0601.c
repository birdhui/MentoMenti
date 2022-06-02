#include <stdio.h>

int main()
{
	/*
int i, j, k;

for (i = 1; i <= 5; i++) {
	for (j = 5; j > i; i--) {
		printf(" ");
	for (k = 1; k <= 10; k *= 2)
	printf("*");
	}
}
printf("\n");

return 0;
}


// 2.
	int i, j;
	for (i = 0; i <= 5; i++) {
		for (j = 5; j > i; j--)
			printf(" ");
		for (j = 1; j <= i*2+1; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}


// 3.
	int i, j;

	for (i = 0; i <= 10; i++) {
		for (j = 5; j+1 > i; j--)
			printf("*");
		for (j = 5; j <= i; j++)
			printf("*");
		for (j = 1; j <= i * 2+1; j++) {
			printf(" ");
		}
		printf("\n");
	}

	return 0;
}

// 4.

	int i, j, r;
	r = 5;

	for (i = -r; i < r; i++) { // i는 -r까지
		for (j = -r; j < r; j++) { // j는 -r까지
			if ((i * i) + (j * j) == r * r) {
				printf("*");
			}
			// i*i=25, j*j=0, r*r=25 j=0
			// i*i=16, j*j=9, r*r=25 j=3, -3 
			// i*i=9, j*j=16, r*r=25 j=4, -4
			else {
				printf("  ");
			 // 그 외에는 공백을 출력해라
			}
		}
		printf("\n");
	}
	return 0;
}

// */