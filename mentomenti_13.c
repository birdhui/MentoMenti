#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double square(double num1)
{

	printf("%lf\n", num1);
	return(num1 * num1);
}

int main(void)
{
	double num1;

	printf("�Ǽ����� �Է����ּ���: ");
	scanf("%lf", &num1);
	printf("%lf\n", num1);
	printf("�Ǽ��� �������� %f�Դϴ�. \n", square(num1));
	return 0;
}

// �Լ� ���� ������ ���൵ ��.