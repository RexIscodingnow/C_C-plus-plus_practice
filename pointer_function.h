/*
    ���Ш禡
 */

#include <iostream>
using namespace std;

/* ���o�ѼưO�����} */
void getAddress_1(int *n);

/* ���Ъ�^�� */
int *getAddress_2();


void getAddress_1(int *n) {
    *n += 100;
}

int *getAddress_2() {
    int *p = new int;
    *p = 6265;
    return p;
}

