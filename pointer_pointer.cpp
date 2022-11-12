/*
    1. 指標的指標
    2. void 指標
    3. 指標的陣列
 */

#include <iostream>
using namespace std;


int main(int argc, char const *argv[]) {
    // 指標的指標，宣告方式
    int **a;
    a = new int*;  // 指派 指標的記憶體位址
    
    *a = new int;  // 儲存指標 的 記憶體位址裡面 存放 int 記憶體空間
    **a = 10;

    cout<<a<<endl;
    cout<<*a<<endl;
    cout<<**a<<endl;
    
    cout<<"-----我是分隔線-----"<<endl;

    int *b = new int;
    *b = 20;
    a = &b;   // 把指標 b 的記憶體位址 指派給 a
    cout<<**a<<endl;

    // void 指標
    void *v;
    v = b;
    cout<<b<<endl;
    cout<<v<<endl;
    cout<<*b<<endl;
    cout<<*((int*)v)<<endl;  // void 指標取值，要先(強制)轉換型別

    cout<<"-----我是分隔線-----"<<endl;

    // 指標的陣列，宣告方式
    int *array[10];
    for (int i = 0; i < 10; i++) {
        /*
            先宣告，再指派
         */
        array[i] = new int;
        *array[i] = i + 1;
    }
    for (int i = 0; i < 10; i++) {
        cout<<*array[i]<<endl;
    }

    cout<<"-----我是分隔線-----"<<endl;

    // 動態指標陣列，使用指標的指標
    int **p_array;
    p_array = new int*[10];
    for (int i = 0; i < 10; i++) {
        p_array[i] = new int;
        *p_array[i] = i + 1;
    }
    for (int i = 0; i < 10; i++) {
        cout<<*p_array[i]<<endl;
    }

    return 0;
}
