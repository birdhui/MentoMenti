#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, z;
	z = 0;

	printf("i�� ���� �Է����ּ���: ");
	scanf("%d", &i);

	for (i=i; ; i++)
		z = i * i;
		printf("%d : %d\n", i, z);

	return 0;
}
// for���� ������ ���� �� �� ���
// continue = if���̶� ��� ���
// break