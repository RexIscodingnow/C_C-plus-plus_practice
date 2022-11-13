/*
    print the rectangle
    印出長方形
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

    int i, j, n;  // n => 邊長 for 長方形
    printf("enter the n = ");
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }

    system("pause");
    return 0;
}
