#include <stdio.h>

// �����͸� �̿��� �迭�� ����

int main(void) {
// 13 - 4
//�迭�� ����� ���� ������ 6,5,4,3,2,1�� ����, �迭�� �հ� �ڸ� ����Ű�� ������ ���� 2���� ���� �� Ȱ��

	int arr[6] = { 1,2,3,4,5,6 };
	int* front = &arr[0];
	int* back = &arr[5];
	int temp;

	for (int i = 0; i < 3; i++) {
		temp = *front;
		*front = *back;
		*back = temp;
		front++;
		back--;
	}

	for (int i = 0; i < 6; i++)
		printf("%d", arr[i]);
	return 0;


}