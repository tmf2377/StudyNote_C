#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int list[3][5] = {
		{12, 56, 32, 16, 98},
		{99, 56, 34, 41, 3},
		{65, 3, 87, 78, 21}
	};

	int sum_hang[3] = { 0, 0 ,0 };
	int sum_yal[5] = { 0, 0, 0, 0, 0 };

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			sum_hang[j] += list[j][i];
			sum_yal[i] += list[j][i];
		}
	}

	for (int i = 0; i < 3; i++) {
		printf("%d행의 합계: %d\n", i,sum_hang[i]);
	}

	for (int i = 0; i < 5; i++) {
		printf("%d행의 합계: %d\n", i, sum_yal[i]);
	}

	return 0;
}