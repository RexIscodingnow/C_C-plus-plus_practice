/*
    �Ѧ� (Reference)
 */

#include <iostream>
using namespace std;

#include <stdio.h>


int main(int argc, char const *argv[]) {
    printf("�}�l����\n");

    // �@���ܼưѦ�
    // printf("a = 8 (����ƭ�)\n");
    // int a = 8;
    // int & x = a;
    // x = 100;

    // cout<<"a = "<<a<<endl;
    // cout<<"x = "<<x<<endl;
    // printf("a �ȧ� 200\n");
    // a = 200;
    // cout<<"a = "<<a<<endl;
    // cout<<"x = "<<x<<endl;

    // printf("�ŧi i = 5445�A������ x\n");
    // int i = 5445;
    // x = i;
    // cout<<"a = "<<a<<endl;
    // cout<<"x = "<<x<<endl;
    // cout<<"i = "<<i<<endl;

    // printf("x �ȧ� 541\n");
    // x = 541;
    // cout<<"a = "<<a<<endl;
    // cout<<"x = "<<x<<endl;
    // cout<<"i = "<<i<<endl;

    // ���аѦ�
    int *b = new int;
    *b = 8;
    int *& y = b;
    *y = 100;
    cout<<"*b = "<<*b<<endl;
    *b = 200;
    cout<<"*y = "<<*y<<endl;

    return 0;
}

