#include <stdio.h>
#include <stdlib.h>

int count_num(int n);

int list[10];

int main(void) {

	int max = -1;
	int num;

	for (int i = 0; i < 100; i++) {
		num = rand() % 10;
		count_num(num);
	}
	
	for (int j = 0; j < 10; j++) {
		if (list[j] > max)
			max = j;
	}

	printf("가장 많이 나온 수 = %d\n", max);

	return 0;
}

int count_num(int n) {

	switch (n) {
	case 0:
		list[0]++;
		break;
	case 1:
		list[1]++;
		break;
	case 2:
		list[2]++;
		break;
	case 3:
		list[3]++;
		break;
	case 4:
		list[4]++;
		break;
	case 5:
		list[5]++;
		break;
	case 6:
		list[6]++;
		break;
	case 7:
		list[7]++;
		break;
	case 8:
		list[8]++;
		break;
	case 9:
		list[9]++;
		break;
	}
}