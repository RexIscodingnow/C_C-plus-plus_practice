/*
    把σ (Reference)
 */

#include <iostream>
using namespace std;

#include <stdio.h>


int main(int argc, char const *argv[]) {
    printf("秨﹍磅︽\n");

    // 跑计把σ
    // printf("a = 8 (计)\n");
    // int a = 8;
    // int & x = a;
    // x = 100;

    // cout<<"a = "<<a<<endl;
    // cout<<"x = "<<x<<endl;
    // printf("a э 200\n");
    // a = 200;
    // cout<<"a = "<<a<<endl;
    // cout<<"x = "<<x<<endl;

    // printf(" i = 5445倒 x\n");
    // int i = 5445;
    // x = i;
    // cout<<"a = "<<a<<endl;
    // cout<<"x = "<<x<<endl;
    // cout<<"i = "<<i<<endl;

    // printf("x э 541\n");
    // x = 541;
    // cout<<"a = "<<a<<endl;
    // cout<<"x = "<<x<<endl;
    // cout<<"i = "<<i<<endl;

    // 夹把σ
    int *b = new int;
    *b = 8;
    int *& y = b;
    *y = 100;
    cout<<"*b = "<<*b<<endl;
    *b = 200;
    cout<<"*y = "<<*y<<endl;

    return 0;
}

