#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int cm, weight;

	printf("------���� �񸸵� ���� ���α׷�-----\n150cm �̻� 160cm ���ϱ����� ���������մϴ�.\n");
	printf("Ű�� �Է����ּ��� : ");
	scanf("%d", &cm);
	printf("�����Ը� �Է����ּ��� : ");
	scanf("%d", &weight);

	/*
	cm >= 150 && cm <= 160;
	*/

	if (cm >= 150 && cm <= 160) {
		printf("�������� Ű�Դϴ�\n");
	}
	if (weight >= 61 && weight <= 100) {
		printf("��� �ʿ��մϴ�\n");
	}
	else if (weight >= 30 && weight <= 60){
		printf("��� �ʿ����� �ʽ��ϴ�\n");
	}
		else{
			printf("30kg �̸��̰ų� 100kg �ʰ��� �������� �ʽ��ϴ�\n");
	}
	return 0;
}