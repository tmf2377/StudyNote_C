#include <stdio.h>

int main(void) {

	float x, y, z;
	float sum;
	float ave;
	float num = 3;

	printf("�Ǽ��� �Է��Ͻÿ�:");
	scanf_s("%f", &x);

	printf("�Ǽ��� �Է��Ͻÿ�:");
	scanf_s("%f", &y);

	printf("�Ǽ��� �Է��Ͻÿ�:");
	scanf_s("%f", &z);

	sum = x + y + z;
	ave = sum / num;

	printf("���� %f�̰� ����� %f�Դϴ�.\n", sum, ave);

	return 0;
}