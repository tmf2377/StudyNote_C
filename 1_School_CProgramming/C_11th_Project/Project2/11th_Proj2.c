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
		printf("������ �Է��Ͻÿ�:");
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
			printf("��ȣ�� �߸��Ǿ����ϴ�.");

		printf("������: %d\n", sum);
	}

	return 0;
}

int add(int a, int b) {
	++addcount;
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", addcount);
	return a + b;
}
int sub(int a, int b) {
	++subcount;
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", subcount);
	return a - b;
}
int mul(int a, int b) {
	++mulcount;
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", mulcount);
	return a * b;
}
int div(int a, int b) {
	++divcount;
	printf("�������� �� %d�� ����Ǿ����ϴ�.\n", divcount);
	return a / b;
}