#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable 4996)

int main(void) {

    int speed = 160;

    if (speed > 120)
        printf("���� 6����\n");
    else if (speed > 150)
        printf("���� 9����\n");
    else
        printf("OK\n");

    return 0;
}
