/* �ݺ���

for, while

for (�ʱ�ȭ; ���ǹ�; ���ҽ�) {
}
-------------------------------------

include <stdio.h>

int main{

int i;
int sum = 0;

for (i = 1; i <= 100; i++) {
	sum += i;
}

printf("%d", sum);

return 0;
}

1���� 100������ ��
*/

#include <stdio.h>

int main()
{

	int i;
	int sum = 0;

	for (i =0; i <= 100; i += 2) {
		sum += i;
	}

	printf("%d\n", sum);

	return 0;
}

// 1 ~ 100 ���� ¦�� �� ���ϱ�

#include <stdio.h>

int main()
{

	int i;
	int sum = 0;

	for (i = 1; i <= 100; i += 2) {
		sum += i;
	}

	printf("%d\n", sum);

	return 0;
}

// 1���� 100���� Ȧ�� �� ���ϱ�

#include <stdio.h>

int main()
{

	int i;
	int sum = 0;
	for (i = 1; i < 100; i++) {
		sum += i;
		printf("%d\n", i);
	}
	printf("%d\n", i);

	return 0;
}

// stop �������������� �ݺ� ���� �ݺ��� ������ ���� ���� for�� ����,
// stop���ǿ��� ��� ��� for�� ����
