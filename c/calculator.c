/*
    calculator for +, -, *, /
    計算機 四則運算
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    int n1, n2, ans;
    char c;
    printf("Type the number1 [+, -, *, /] number2: ");
    scanf("%d%c%d", &n1, &c, &n2);

    if (c == '+') {
        ans = n1 + n2;
    } else if (c == '-') {
        ans = n1 - n2;
    } else if (c == '*') {
        ans = n1 * n2;
    } else if (c == '/') {
        ans = n1 / n2;
    }
    printf("%d", ans);

    system("pause");
    return 0;
}

