#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1;

	printf("�������� �Է����ּ���: ");
	scanf("%d", &num1);
	printf("�������� %d�Դϴ�. \n", square(num1));
}
int square(int num1)
{
	return(num1 * num1);
}
/* ����, ����, ȣ��
   ���� 1�� �Է�
   �������� ���ؼ� ��� */