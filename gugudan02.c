#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j, first, last;

	printf("단을 입력해주세요: ");
	scanf("%d", &first);
	printf("단을 입력해주세요: ");
	scanf("%d", &last);

	for (i = first; i <= last; i++) {
		printf("  <%d단>\n", i);
		for (j = 1; j <= 9; j++) {
			printf("%d X %d = %2d\n", i, j, (i * j));
			// %2d 자릿수를 두자리로 맞춰놓고 실행됨
		}
		printf("\n");
	}

	return 0;
}

// 시작단과 끝단 입력받아 구구단 실행시키기