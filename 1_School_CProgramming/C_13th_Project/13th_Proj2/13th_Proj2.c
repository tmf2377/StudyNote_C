#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:4996)

int a, b;
int main(void) {

	char ope[3];
	int sum = 0;
	int i;
	char add[3] = { 'a','d','d'};

	printf("연산을 입력하시오:");
	scanf_s("%s %d %d", ope, sizeof(ope), &a, &b);

	for (i = 0; i < 3; i++) {
		if (ope[i] == add[i]) {
			sum = a + b;
		}
		else if (ope == 'sub') {
			sum = a - b;
		}
		else if (ope == 'mul') {
			sum = a * b;
		}
		else {
			sum = a / b;
		}
	}


	printf("연산의 결과: %d", sum);

	return 0;
}