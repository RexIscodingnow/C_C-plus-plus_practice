/*
    1D array for print 1 to 9
    一維陣列，印 1 到 9
    (九宮格)
     int n[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
位置(position): 0  1  2  3  4  5  6  7  8
    In C language's world(?), always count numbers begin to 0
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    // length(長): 9
    int i, n[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    /* sizeof(n) -> n 陣列資料總大小(長度),
       sizeof(n[0]) -> n 陣列之第 0 位資料大小(長度)
       (sizeof(n) / sizeof(n[0])) = 陣列長度
    */
    for (i = 0; i < (sizeof(n) / sizeof(n[0])); ++i) {
        printf("%d", n[i]);
        printf("\n");
    }

    // 印出九宮格
    // for (i = 0; i < (sizeof(n) / sizeof(n[0])); ++i) {
    //     if (n[i] % 3 == 0) {
    //         printf("%d", n[i]);
    //         printf("\n");
    //     }
    //     else {
    //         printf("%d", n[i]);
    //     }
    // }

    system("pause");
    return 0;
}

