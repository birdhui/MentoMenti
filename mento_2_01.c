// �� �ڿ��� ����ϱ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, plus, minus, mul, diff, rest;

	printf("�� �ڿ����� �Է��Ͻÿ�: ");
	scanf("%d %d", &a, &b);

	plus = a + b; // ���ϱ�
	minus = a - b; // ����
	mul = a * b; // ���ϱ�
	diff = a / b; // ��
	rest = a % b; // ������

	printf("%d\n", plus);
	printf("%d\n", minus);
	printf("%d\n", mul);
	printf("%d\n", diff);
	printf("%d\n", rest);

	return 0;
}