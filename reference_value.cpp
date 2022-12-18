/*
    參考參數
 */

#include <iostream>

using namespace std;

void changeValue(int &a);
void changeValue_pointer(int *&b);

int main(int argc, char const *argv[]) {
    int i = 1;
    changeValue(i);
    cout<<"---- 一般變數 ----"<<endl;
    cout<<"i = "<<i<<endl;
    cout<<"---- 使用指標 ----"<<endl;

    int *p = new int;
    *p = 1;
    changeValue_pointer(p);
    cout<<"*p = "<<*p<<endl;
 
    return 0;
}

void changeValue(int &a) {
    a += 100;
}

void changeValue_pointer(int *&b) {
    *b += 100;
}





