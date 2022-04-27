#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, z;

	printf("가로 별 수를 입력해주세요: ");
	scanf("%d", &i);
	printf("세로 별 수를 입력해주세요: ");
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
   for문 안에 int 바로 선언할 수 있다.
   for문 위에 선언하면 메모리가 계속 살아있음
   for문 안에 바로 선언하면 필요할 곳에만 메모리를 사용하기 때문에
   굳이 메모리를 많이 사용할 필요가 없어짐 */

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

	scanf사용하지 않고
	*
	**
	***
	****
	*****
	출력하는 방법
*/


// 가로 세로를 입력받아서
// 직사각형 별찍기 (가로 세로 별 수 입력)