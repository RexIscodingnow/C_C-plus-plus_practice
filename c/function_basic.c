/*
    function for calculator
    �禡���^�ǭ�
*/
#include <stdio.h>
#include <stdlib.h>

/* �p�G�۩w�q�禡��b main() �U��A
   �n���W�o�����sĶ��(��)��{��*/
void calculator(int, int, char);

int main(int argc, char const *argv[]) {
    // Example: calculator �p���
    int n1, n2;
    char option;
    printf("Type the number1 [+, -, *, /] number2: ");
    scanf("%d%c%d", &n1, &option, &n2);
    // �۩w�q�禡�A����p��|�h�B��
    calculator(n1, n2, option);

    system("pause");
    return 0;
}

// void ���L�^�ǭȡA����� return
void calculator(int n1, int n2, char op) {
    int ans;

    if (op == '+') {
        ans = n1 + n2;
    } else if (op == '-') {
        ans = n1 - n2;
    } else if (op == '*') {
        ans = n1 * n2;
    } else if (op == '/') {
        ans = n1 / n2;
    }

    printf("%d\n", ans);
}