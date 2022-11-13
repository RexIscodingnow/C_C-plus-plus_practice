/*
    if and else basic practice
    if 和 else 判斷式(基本版)
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // for data type -> bool

int main(int argc, char const *argv[]) {
    // If the score equals to 100, should get $1000. Else "get $500"
    int score;
    printf("Enter your score (1~100): ");
    scanf("%d", &score);

    if (score == 100) {
        printf("get $1000\n");
    }
    else {
        printf("get $500\n");
    }
    
    system("pause");
    return 0;
}
