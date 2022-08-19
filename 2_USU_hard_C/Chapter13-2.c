#include <stdio.h>

// 포인터를 이용한 배열의 접근

int main(void) {
// 13 - 2 (13 - 1이랑 연계)
// 이번엔 포인터 변수의 저장된 값을 변경하지 않고 덧셈 연산을 하여
// 그 결과로 반환되는 주소값을 통해서 모든 배열요소에 접근하여 값을 2씩 증가

	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr;

	for (int i = 0; i < 5; i++) {
		*(ptr + i) += 2;
	}
	for (int i = 0; i < 5; i++) {
		printf("%d", arr[i]);
	}
	return 0;
	// 엥 나 솔직히 뭐가 다른지 잘 모르겠음
}