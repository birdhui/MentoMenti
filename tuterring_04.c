#include <stdio.h>

int main()
{
	// 1.
	/*
	int i, j;

	for (i = 1; i <= 10; i++) { // ������ : 10��
		for (j = 1; j <= i; j++) { // i�� 1�� ��, j�� 1 : ù��° ���� 1�� �ݺ�
								   // i�� 2�� ��, j��
			printf("*");
		}
		printf("\n");
	}

	return 0;


	// 2.

	int i, j;

	for (i = 1; i <= 10; i++) {
		for (j = 10; j > i; j--) { // j > i -> j�� 10�� ��, i�� 1�̴� j > i�� ���� ������ ��
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