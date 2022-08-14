#include <stdio.h>

void print_menu() {
    printf("=============================\n");
    printf("MENU\n");
    printf("=============================\n");
    printf("1. 덧셈\n2. 뺄셈\n3. 곱셈\n4. 나눗셈\n5. 나머지\n");
}
int input_menu() {
    int temp;
    printf("원하는 메뉴를 선택하시오(1-5):");
    scanf_s("%d", &temp);
    return temp;
}

void input_message() {
    printf("숫자 2개를 입력하시오:");
}
int input_a() {
    int temp;
    scanf_s("%d", &temp);
    return temp;
}
int input_b() {
    int temp;
    scanf_s("%d", &temp);
    return temp;
}
int add(int a, int b) {
    return a + b;
}
int min(int a, int b) {
    return a - b;
}
int gop(int a, int b) {
    return a * b;
}
int hal(int a, int b) {
    return a / b;
}
int nam(int a, int b) {
    return a % b;
}
void result(int n) {
    printf("연산결과:%d\n", n);
}
char input_continue() {
    char con;
    printf("계속하려면 y를 누르시오:");
    scanf_s(" %c", &con);
    return con;
}

int main(void) {
    int n = 0;

    int a = 0;
    int b = 0;
    int output = 0;
    char alp;

    while (1)
    {
        print_menu();
        n = input_menu();
        input_message();
        a = input_a();
        b = input_b();
        if (n == 1)
            output = add(a, b);
        else if (n == 2)
            output = min(a, b);
        else if (n == 3)
            output = gop(a, b);
        else if (n == 4)
            output = hal(a, b);
        else
            output = nam(a, b);

        result(output);
        alp = input_continue();
        if (alp != 'y')
            break;
    }
}
