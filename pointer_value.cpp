/*
    指標練習
 */

// 內建函式庫
#include <iostream>
using namespace std;
#include <string.h>

// 自訂函式庫
#include "pointer_function.h"

int main(int argc, char const *argv[]) {
    /*
        指標宣告 與 使用
     */
    
    // 1. 宣告指標 (初次見面)

    // 給一般變數 的 "記憶體位址"
    // int a;
    // cout<<"a = ";
    // cin>>a;
    // int *p;   // 宣告 指標
    // p = &a;   // 指派 一般變數 a 的記憶體位址，使用 & 符號取址

    // cout<<"p 的記憶體位址: "<<p<<endl<<"p 的記憶體空間內的值: "<<*p<<endl;
    
    // 由於 變數 a 的"地址"給了 指標 p，因此 p 改變，變數 a 也會變動
    // cout<<"p 的記憶體空間內的值: ";
    // cin>>*p;
    // cout<<"p 的記憶體空間內的值: "<<*p<<endl<<"a = "<<a;

    // 使用關鍵字 new [資料型別];
    // int *n = new int;   // 配置一個新的 記憶體空間，並把 "地址" 給了指標 n
    // cout<<"*n = ";
    // cin>>*n;
    // cout<<"n 的記憶體位址: "<<n<<endl<<"n 的空間內的值: "<<*n<<endl;

    // 2. 釋放記憶體 (頭痛的開始)
    // int *m = new int;

    // char str[6];

    // 使用關鍵字 delete [指標名稱];
    // cout<<"*m = ";
    // cin>>*m;
    // cout<<"m = "<<m<<endl<<"*m = "<<*m<<endl;
    
    // cout<<"輸入 \"delete\" 釋放掉指標 m "<<endl;
    // cout<<"輸入 \"done\" 結束這回合(誤 "<<endl;
    // cout<<"=> ";
    // cin>>str;
    // if (!strcmp(str, "delete")) {
    //     if (!strcmp(str, "Y") || !strcmp(str, "y")) {
    //         delete m;
    //     }
    //     if (!strcmp(str, "N") || !strcmp(str, "n")) {
    //         cout<<"m = "<<m<<endl<<"*m = "<<*m<<endl;
    //     }
    // }
    // else if (!strcmp(str, "done")) {
    //     cout<<"結束"<<endl<<endl<<"印出..."<<endl;
    // }

    // cout<<"m = "<<m<<endl<<"*m = "<<*m<<endl;

    // 3. const 與 指標

    // const type *name
    // int num;

    // cout<<"num => ";
    // cin>>num;

    // const int *NUMBER = &num;
    // cout<<"int num = "<<num<<endl<<"NUMBER = "<<*NUMBER<<endl<<"const int *NUMBER = "<<NUMBER<<endl;

    // *NUMBER = 52;   // 不可變動性
    // delete NUMBER;

    // int num2;
    // cout<<"num2 = ";
    // cin>>num2;

    // NUMBER = &num2;
    // cout<<"int num2 = "<<num2<<endl<<"NUMBER = "<<*NUMBER<<endl<<"const int *NUMBER = "<<NUMBER<<endl;

    // type *const name
    // int *const NUMBER2 = new int, new_number;

    // *NUMBER2 = 204860;
    // cout<<"NUMBER2 = "<<NUMBER2<<endl<<"*NUMBER2 = "<<*NUMBER2<<endl;

    // cout<<"new_number = ";
    // cin>>new_number;
    // *NUMBER2 = new_number;
    // cout<<"NUMBER2 = "<<NUMBER2<<endl<<"*NUMBER2 = "<<*NUMBER2<<endl<<"new_number = "<<new_number<<endl;

    // delete NUMBER2;
    // NUMBER2 = new int;   // 不可以再重新指派

    /*
        函式 與 指標
     
        使用 "pointer_function.h" 標頭函式庫
     */
    int a = 1;
    getAddress_1(&a);
    cout<<"a = "<<a<<endl;  

    int *n = getAddress_2();
    cout<<"n = "<<n<<endl<<"*n = "<<*n<<endl;

    return 0;
}


