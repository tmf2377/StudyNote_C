#include <stdio.h>

int main(void) {

	float w, h;
	float area;

	printf("�ﰢ���� �غ� : ");
	scanf_s("%f", &w);

	printf("�ﰢ���� ���� : ");
	scanf_s("%f", &h);

	area = w * h / 2;

	printf("�ﰢ���� ���� : %f\n", area);

	return 0;

}