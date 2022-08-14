#include <stdio.h>

int main(void) {

	float w, h;
	float area;

	printf("»ï°¢ÇüÀÇ ¹Øº¯ : ");
	scanf_s("%f", &w);

	printf("»ï°¢ÇüÀÇ ³ôÀÌ : ");
	scanf_s("%f", &h);

	area = w * h / 2;

	printf("»ï°¢ÇüÀÇ ³ĞÀÌ : %f\n", area);

	return 0;

}