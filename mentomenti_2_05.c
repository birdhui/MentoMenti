// �ݺ���_������ N�� ����ϱ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int dan, num;
	num = 1;
	printf("���ϰ��� �ϴ� �������� ���� �Է��Ͻÿ�: ");
	scanf("%d", &dan);

	/*
	for (num = 1; num < 10; num++);
	{
		printf("%d * %d = %d\n", N, num,(N*num));
	}
	*/
	// for�� �� �ȵ���

	while (num <= 9)
	{
		printf("%d * %d = %d\n", dan, num, (dan * num));
		num++;
	}
	return 0;
}