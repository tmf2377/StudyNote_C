#include <stdio.h>

void print_menu() {
    printf("=============================\n");
    printf("MENU\n");
    printf("=============================\n");
    printf("1. ����\n2. ����\n3. ����\n4. ������\n5. ������\n");
}
int input_menu() {
    int temp;
    printf("���ϴ� �޴��� �����Ͻÿ�(1-5):");
    scanf_s("%d", &temp);
    return temp;
}

void input_message() {
    printf("���� 2���� �Է��Ͻÿ�:");
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
    printf("������:%d\n", n);
}
char input_continue() {
    char con;
    printf("����Ϸ��� y�� �����ÿ�:");
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
