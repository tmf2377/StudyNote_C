#include <stdio.h>

// 14 - 1
// ���� num�� ����� ���� ������ ����ϴ� �Լ��� �����ϰ�, �̸� ȣ���ϴ� main�Լ� �ۼ�, �� ���� �ΰ��� ���·� �Լ��� �����ؾ��� 
// 1. Call-by-value ����� SquareByValue �Լ�
// 2. Call-by-reference ����� SquareByReferece �Լ�
// SquareByValue�Լ��� ���ڷ� ���޵� ���� ������ ��ȯ�ؾ��ϸ�, 
// SquareByReference�Լ��� ������ ����Ǿ� �ִ� ������ �ּ� ���� ���ڷ� �޾Ƽ� �ش� ������ ����� ���� ������ �� ������ �ٽ� ����

int SquareByValue(int num1) {
	int exp;
	exp = num1 * num1;
	return exp; // return num1*num1 �����̸� ��
}

void SquareByReference(int* num2) {
	
	*num2 *= *num2;

	// int ptr = *num2;
	//*num2 = ptr*ptr;
}

int main(void) {

	int num1 = 5;;

	int num2 = 4;
	int* nump2 = &num2;

	printf("Value : %d\n", SquareByValue(num1));

	SquareByReference(&num2);
	printf("Reference : %d\n", num2);

	return 0;
}