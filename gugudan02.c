#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j, first, last;

	printf("���� �Է����ּ���: ");
	scanf("%d", &first);
	printf("���� �Է����ּ���: ");
	scanf("%d", &last);

	for (i = first; i <= last; i++) {
		printf("  <%d��>\n", i);
		for (j = 1; j <= 9; j++) {
			printf("%d X %d = %2d\n", i, j, (i * j));
			// %2d �ڸ����� ���ڸ��� ������� �����
		}
		printf("\n");
	}

	return 0;
}

// ���۴ܰ� ���� �Է¹޾� ������ �����Ű��