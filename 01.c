#include <stdio.h>

int main()
{
	int x, y, one, two, three, four;

	x = 472;
	y = 385;

	printf("����1�� �� : %d\n", x);
	printf("����2�� �� : %d\n", y);

	one = y % 10 * x;
	two = y % 100 / 10 * x;
	three = y % 1000 / 100 * x;
	four = x * y;

	printf("ù��° ����� : %d\n", one);
	printf("�ι�° ����� : %d\n", two);
	printf("����° ����� : %d\n", three);
	printf("����� : %d\n", four);

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

    printf("����1�� �� : ");
    scanf("%d", &firstNum);
    printf("����2�� �� : ");
    scanf("%d", &secondNum);

    resultNum1 = firstNum * (secondNum % 10);
    resultNum2 = firstNum * (secondNum % 100 - (secondNum % 10));
    resultNum3 = firstNum * (secondNum % 1000 - (secondNum % 10) - (secondNum % 100 - (secondNum % 10)));
    result = resultNum1 + resultNum2 + resultNum3;

    printf("ù��° ����� : %d\n", resultNum1);
    printf("�ι�° ����� : %d\n", resultNum2 / 10);
    printf("����° ����� : %d\n", resultNum3 / 100);
    printf("����� : %d\n", result);
    return 0;
}*/