// �Լ�_�� ���� ���� ���ϰ� �����ϴ� add�Լ�, *���
// �Լ� �ͼ����� ������ �����ϱ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
// 01 ����
int get_integer() // �Լ� ����
{
	int value;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &value);
	return value;
}
int add(int num1, int num2) 
{
	return num1 + num2;
}
int main() // �Լ� ȣ��
{
	int num1 = get_integer();
	int num2 = get_integer();

	int sum = add(num1, num2);
	printf("�� ���� ���� %d�Դϴ�. \n", sum);
	return 0;
}
*/;

// 02 ����
int star(int i, int j); // �Լ� ����

int main() // �Լ� ȣ��
{
	int j=5;

	printf("*\n", star(j));

	return 0;
}

int star(int i, int j) // �Լ� ����
{
	for (i = 0; i <= j; i++);
	{
		printf("*\n");
	}
	
	return star;
}