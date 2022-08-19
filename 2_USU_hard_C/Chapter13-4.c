#include <stdio.h>

// 포인터를 이용한 배열의 접근

int main(void) {
// 13 - 4
//배열에 저장된 값의 순서를 6,5,4,3,2,1로 뒤집, 배열의 앞과 뒤를 가리키는 포인터 변수 2개를 선언 및 활용

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