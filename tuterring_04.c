#include <stdio.h>

int main()
{
	// 1.
	/*
	int i, j;

	for (i = 1; i <= 10; i++) { // 세로줄 : 10줄
		for (j = 1; j <= i; j++) { // i가 1일 때, j는 1 : 첫번째 줄은 1번 반복
								   // i가 2일 때, j는
			printf("*");
		}
		printf("\n");
	}

	return 0;


	// 2.

	int i, j;

	for (i = 1; i <= 10; i++) {
		for (j = 10; j > i; j--) { // j > i -> j가 10일 때, i가 1이니 j > i로 식을 세워야 함
			printf("*");
		}
		if (i < 10)
		printf("\n");
	}

	return 0;
}

// 3.
	int i, j, k;

	for (i = 1; i <= 5; i++) {
		for (j = 5; j > i; i--) {
			printf(" ");
		for (k = 1; k <=10; k*=2)
		printf("*");
	}

	return 0;
}
	// */