/*
    basic function for driver is legal or illegal
    輸入年齡，判斷是否為合法駕駛
*/
#include <stdio.h>
#include <stdlib.h>

int can_drive(int);
void print_driver(int);

int main(int argc, char const *argv[]) {
    
    int age, can_dr;

    printf("Type your age: ");
    scanf("%d", &age);

    can_dr = can_drive(age); // 回傳位置
    print_driver(can_dr);

    system("pause");
    return 0;
}

// 判斷是否為合法年齡
int can_drive(int age) {
    int legal;

    if (age >= 18) {
        legal = 1;
    }
    else {
        legal = 0;
    }

    return legal; // 回傳至 main()
}

// 印出結果
void print_driver(int can_dr) {
    if (can_dr == 1) {
        printf("legal_driver");
    }
    else {
        printf("illegal_driver");
    }
}