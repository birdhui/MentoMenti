#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int cm, weight;

	printf("------여성 비만도 측정 프로그램-----\n150cm 이상 160cm 이하까지만 측정가능합니다.\n");
	printf("키를 입력해주세요 : ");
	scanf("%d", &cm);
	printf("몸무게를 입력해주세요 : ");
	scanf("%d", &weight);

	/*
	cm >= 150 && cm <= 160;
	*/

	if (cm >= 150 && cm <= 160) {
		printf("정상적인 키입니다\n");
	}
	if (weight >= 61 && weight <= 100) {
		printf("운동이 필요합니다\n");
	}
	else if (weight >= 30 && weight <= 60){
		printf("운동이 필요하지 않습니다\n");
	}
		else{
			printf("30kg 미만이거나 100kg 초과는 측정되지 않습니다\n");
	}
	return 0;
}