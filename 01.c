#include <stdio.h>

int main()
{
	int x, y, one, two, three, four;

	x = 472;
	y = 385;

	printf("변수1의 값 : %d\n", x);
	printf("변수2의 값 : %d\n", y);

	one = y % 10 * x;
	two = y % 100 / 10 * x;
	three = y % 1000 / 100 * x;
	four = x * y;

	printf("첫번째 결과값 : %d\n", one);
	printf("두번째 결과값 : %d\n", two);
	printf("세번째 결과값 : %d\n", three);
	printf("결과값 : %d\n", four);

	return 0;
}

/*#include <stdio.h>
int main(void)
{
    int firstNum;
    int secondNum;
    int resultNum1;
    int resultNum2;
    int resultNum3;
    int result;

    printf("변수1의 값 : ");
    scanf("%d", &firstNum);
    printf("변수2의 값 : ");
    scanf("%d", &secondNum);

    resultNum1 = firstNum * (secondNum % 10);
    resultNum2 = firstNum * (secondNum % 100 - (secondNum % 10));
    resultNum3 = firstNum * (secondNum % 1000 - (secondNum % 10) - (secondNum % 100 - (secondNum % 10)));
    result = resultNum1 + resultNum2 + resultNum3;

    printf("첫번째 결과값 : %d\n", resultNum1);
    printf("두번째 결과값 : %d\n", resultNum2 / 10);
    printf("세번째 결과값 : %d\n", resultNum3 / 100);
    printf("결과값 : %d\n", result);
    return 0;
}*/