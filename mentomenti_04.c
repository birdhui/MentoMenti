#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, z;
	i = 0;
	z = 0;

	printf("i�� ���� �Է����ּ���: ");
	scanf("%d", &i);

	while (i <= 10) {
		z = i * i;
		printf("%d : %d\n", i, z);
		i++;
	}

	return 0;
}
// ���� �� �� �ݺ��ؾ��� �� ���
// i++ / ++i / int i=0; 
// while ��� �ȿ� printf ����ϸ� �� �������� �ݺ�
// ��� �ۿ� ����ϸ� ������ ���� ���