#include <stdio.h>

// 14 - 1
// 변수 num에 저장된 값의 제곱을 계산하는 함수를 정의하고, 이를 호출하는 main함수 작성, 단 다음 두가지 형태로 함수를 정의해야함 
// 1. Call-by-value 기반의 SquareByValue 함수
// 2. Call-by-reference 기반의 SquareByReferece 함수
// SquareByValue함수는 인자로 전달된 값의 제곱을 반환해야하며, 
// SquareByReference함수는 정수가 저장되어 있는 변수의 주소 값을 인자로 받아서 해당 변수에 저장된 값의 제곱을 그 변수에 다시 저장

int SquareByValue(int num1) {
	int exp;
	exp = num1 * num1;
	return exp; // return num1*num1 한줄이면 됨
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