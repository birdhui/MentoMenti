#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num, result;
	num = 0;
	result = 0;

	printf("�������� �Է����ּ���: ");
	scanf("%d", &num);
	prime(num);
	//�������� 0�̸� ����� ������ ����
	}

int prime(int num)
{
	for (int result = 1; result <= num; result++)
	{
		if (num == 2) {
			printf("%d�� �Ҽ��Դϴ�.\n", num);
		}
		else {
			printf("%d�� �Ҽ��� �ƴմϴ�.\n", num);
		}
	}
	return num;
}