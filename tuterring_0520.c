/* 반복문

for, while

for (초기화; 조건문; 감소식) {
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

1부터 100까지의 합
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

// 1 ~ 100 까지 짝수 합 구하기

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

// 1부터 100까지 홀수 합 구하기

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

// stop 조건충족까지는 반복 이후 반복이 끝난뒤 증감 적용 for문 시작,
// stop조건에서 벗어난 경우 for문 종료
