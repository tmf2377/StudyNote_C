#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int add();
int sub();
int mul();
int div();

int a = 0;
int b = 0;
char cal;
int addcount = 0;
int subcount = 0;
int mulcount = 0;
int divcount = 0;

int main(void) {

	static int sum;

	while (1) {
		printf("연산을 입력하시오:");
		scanf_s("%d", &a);
		scanf_s("%c", &cal,sizeof(cal));
		scanf_s("%d", &b);
		
		
		if (cal == '+')
			sum = add(a, b);
		else if (cal == '-')
			sum = sub(a, b);
		else if (cal == '*')
			sum = mul(a, b);
		else if (cal == '/')
			sum = div(a, b);
		else
			printf("기호가 잘못되었습니다.");

		printf("연산결과: %d\n", sum);
	}

	return 0;
}

int add(int a, int b) {
	++addcount;
	printf("덧셈은 총 %d번 실행되었습니다.\n", addcount);
	return a + b;
}
int sub(int a, int b) {
	++subcount;
	printf("뺄셈은 총 %d번 실행되었습니다.\n", subcount);
	return a - b;
}
int mul(int a, int b) {
	++mulcount;
	printf("곱셈은 총 %d번 실행되었습니다.\n", mulcount);
	return a * b;
}
int div(int a, int b) {
	++divcount;
	printf("나눗셈은 총 %d번 실행되었습니다.\n", divcount);
	return a / b;
}