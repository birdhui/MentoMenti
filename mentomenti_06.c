#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, z;

	printf("���� �� ���� �Է����ּ���: ");
	scanf("%d", &i);
	printf("���� �� ���� �Է����ּ���: ");
	scanf("%d", &z);

	for (i = i; i < 5; i++) {
		for (z = z; z < 5; z++)
		{
			printf("*");
		}
		printf("*\n");
	}
	return 0;
}

/* int
   for�� �ȿ� int �ٷ� ������ �� �ִ�.
   for�� ���� �����ϸ� �޸𸮰� ��� �������
   for�� �ȿ� �ٷ� �����ϸ� �ʿ��� ������ �޸𸮸� ����ϱ� ������
   ���� �޸𸮸� ���� ����� �ʿ䰡 ������ */

	/*for (i = 0; i < 2; i++) {
		for (i = 0; i < 1; i++)
		{
			printf("*");
		}
		printf("*\n");
	}
	for (i = 0; i < 3; i++) {
		for (i = 0; i < 2; i++)
		{
			printf("*");
		}
		printf("*\n");
	}
	for (i = 0; i < 4; i++) {
		for (i = 0; i < 3; i++)
		{
			printf("*");
		}
		printf("*\n");
	}
	for (i = 0; i < 5; i++) {
		for (i = 0; i < 4; i++)
		{
			printf("*");
		}
		printf("*\n");
	}

	return 0;
}

	scanf������� �ʰ�
	*
	**
	***
	****
	*****
	����ϴ� ���
*/


// ���� ���θ� �Է¹޾Ƽ�
// ���簢�� ����� (���� ���� �� �� �Է�)