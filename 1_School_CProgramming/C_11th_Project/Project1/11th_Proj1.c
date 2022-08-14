#include <stdio.h>
#include <stdlib.h>

void hanoi_tower(int n, char from, char tmp, char to); 
//n은 원판의 개수, from은 원판이 출발하는 막대, tmp는 중간다리 역할을 하는 막대, to는 목표지점의 막대

int main(void) {
	hanoi_tower(4, 'A', 'B', 'C'); //4개의 원판이 ABC막대를 활용해 하노이 탑을 완성함
	return 0;
}
//원리는 가장 아래 발판을 목적지에 옮기고 나머지 위의 세트를 옮기는 방식을 반복함
void hanoi_tower(int n, char from, char tmp, char to) {
	if (n == 1)
		printf("원판 1을 %c에서 %c으로 옮긴다.\n", from, to);
	// 마지막 원판을 출발지점에서 목표지점으로 옮긴다 - 완성
	else {
		hanoi_tower(n - 1, from, to, tmp); //원판 n-1을 기존 from(A)의 위치에서 tmp(B)위치로 옮김
		printf("원판 %d을 %c에서 %c으로 옮긴다.\n", n, from, to); //원판 n을 from(A)에서 to(C)로 옮김
		hanoi_tower(n - 1, tmp, from, to); //원판 n-1을 기존 tmp(B)의 위치에서 to(C)위치로 옮김
		//위의 상황을 반복하다보면 원판n을 출발에서 도착으로 이동시켜주는 것임
		//그 사이에 n위의 원판들을 하나로 보고 이동시켜줌
		//이 과정을 반복하다보면 2개의 원판을 출발지점에서 도착지점으로 옮겨주는 행위를 반복하는 것과 같음
		//위의ABC가 원판의 개수가 늘어나면 중간 단계의 위치로 사용됨
	}
}