#include <stdio.h>

// 세 변수에 저장된 값을 서로 뒤바꾸는 함수를 정의해보자 예를 들어 함수의 이름이 Swap이면
// Swap(&num1, &num2, &num3);이 호출되어야 함
// 함수 호출의 결과로 num1 > num2, num2 > num3, num3 > num1에 저장

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