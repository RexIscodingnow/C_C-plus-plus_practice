/*
    指標函式
 */

#include <iostream>
using namespace std;

/* 取得參數記憶體位址 */
void getAddress_1(int *n);

/* 指標返回值 */
int *getAddress_2();


void getAddress_1(int *n) {
    *n += 100;
}

int *getAddress_2() {
    int *p = new int;
    *p = 6265;
    return p;
}

