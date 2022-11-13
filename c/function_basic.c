/*
    function for calculator
    函式之回傳值
*/
#include <stdio.h>
#include <stdlib.h>

/* 如果自定義函式放在 main() 下方，
   要打上這行讓編譯器(先)辨認到*/
void calculator(int, int, char);

int main(int argc, char const *argv[]) {
    // Example: calculator 計算機
    int n1, n2;
    char option;
    printf("Type the number1 [+, -, *, /] number2: ");
    scanf("%d%c%d", &n1, &option, &n2);
    // 自定義函式，執行計算四則運算
    calculator(n1, n2, option);

    system("pause");
    return 0;
}

// void 為無回傳值，不能放 return
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