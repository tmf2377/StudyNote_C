#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:4996)

// 포인터를 이용한 배열의 접근

int main(void) {
/* 13 - 1
	// 포인터 변수 ptr에 저장된 값을 증가시키는 형태의 연산을 기반으로
	// 배열요소에 접근하면서 모든 배열요소의 값을 2씩 증가시키고 정상적으로 증가됐는지 확인
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr;

	// 오랜만에 코딩을 해보니 생각보다 더 머리가 안 돌아간다... 답지보고 해결함 ㅠ
	for (int i = 0; i < 5; i++) {
		*ptr += 2;
		ptr++;
	}

	for (int i = 0; i < 5; i++) {
		printf("%d", arr[i]);
	}
	return 0;*/
	
/* 13 - 2
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
	return 0;// 엥 나 솔직히 뭐가 다른지 잘 모르겠음*/

/*13 - 3
	// 배열의 마지막 요소를 가리키는 ptr, ptr에 저장된걸 감소시키는 형태의 연산을 기반으로
	// 모든 배열요소에 접근해 배열에 저장된 모든 정수를 더하여 그 결과를 출력
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = &arr[4];
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += *(ptr--); // 난 sum += ptr[4 - i]이라구 함
	}
	printf("%d", sum);
	return 0;// 중요한거 : 배열의 맨 앞을 가리키는거 *ptr=arr은 되는데 배열의 요소를 가리킬 때는 &가 필요하다! */

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