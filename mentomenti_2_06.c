// �ݺ��� ���ﰢ�� �����
// ��ǰ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N, i, j;
	
	printf("����ϰ��� �ϴ� ������ ���� ���̸� �Է��Ͻÿ�: ");
	scanf("%d", &N);

	for (i = 0; i <= N; i++)
	{
		printf("*");
		for (j = N; j = i; j--);
		printf(" ");
	}
	printf("\n");

	return 0;
}