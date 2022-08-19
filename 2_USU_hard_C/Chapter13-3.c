#include <stdio.h>

// 포인터를 이용한 배열의 접근

int main(void) {
//13 - 3
// 배열의 마지막 요소를 가리키는 ptr, ptr에 저장된걸 감소시키는 형태의 연산을 기반으로
// 모든 배열요소에 접근해 배열에 저장된 모든 정수를 더하여 그 결과를 출력
				
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = &arr[4];			
	int sum = 0;
				
	for (int i = 0; i < 5; i++) {
		sum += *(ptr--); // 난 sum += ptr[4 - i]이라구 함
	}
				
	printf("%d", sum);
	return 0;
	// 중요한거 : 배열의 맨 앞을 가리키는거 *ptr=arr은 되는데 배열의 요소를 가리킬 때는 &가 필요하다! 



}