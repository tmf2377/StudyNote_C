#include <stdio.h>

int main(void) {

	float x, y, z;
	float sum;
	float ave;
	float num = 3;

	printf("실수를 입력하시오:");
	scanf_s("%f", &x);

	printf("실수를 입력하시오:");
	scanf_s("%f", &y);

	printf("실수를 입력하시오:");
	scanf_s("%f", &z);

	sum = x + y + z;
	ave = sum / num;

	printf("합은 %f이고 평균은 %f입니다.\n", sum, ave);

	return 0;
}