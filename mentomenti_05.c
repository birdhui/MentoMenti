#include <stdio.h>

int main(void)
{
	for (int i = 0; i < 3; i++) {
		for (int z = 0; z<=2; z++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

/* int
   for문 안에 int 바로 선언할 수 있다.
   for문 위에 선언하면 메모리가 계속 살아있음
   for문 안에 바로 선언하면 필요할 곳에만 메모리를 사용하기 때문에
   굳이 메모리를 많이 사용할 필요가 없어짐 */