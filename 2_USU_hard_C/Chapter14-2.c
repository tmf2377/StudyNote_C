#include <stdio.h>

// �� ������ ����� ���� ���� �ڹٲٴ� �Լ��� �����غ��� ���� ��� �Լ��� �̸��� Swap�̸�
// Swap(&num1, &num2, &num3);�� ȣ��Ǿ�� ��
// �Լ� ȣ���� ����� num1 > num2, num2 > num3, num3 > num1�� ����

void Swap(int* num1, int* num2, int* num3) {
	int temp = *num1;
	*num1 = *num2;
	*num2 = *num3;
	*num3 = temp;

}

int main(void) {
	int num1 = 2, num2 = 3, num3 = 4;

	Swap(&num1, &num2, &num3);

	printf("num1 : %d, num2 : %d, num3 : %d\n", num1, num2, num3);
}