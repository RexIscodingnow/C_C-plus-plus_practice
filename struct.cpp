#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;


#include "struct.h"



/* 其他函式 */
void printStruct_1(string time, string name, bool waterProof, short id);


/* 結構成員宣告 */
struct Phone {
    string time;
    string name;
    bool is_waterProof;
    short id;
};


int main(int argc, char const *argv[]) {
    /*
     * Struct 一般變數 與 指標變數使用方式
     */
    // cout<<"-----------------------"<<endl;
    // cout<<"Variable"<<endl;
    // circle_1.radius = 2;
    // circle_1.height = 10;
    // circle_2.radius = 3; 
    // circle_2.height = 20;

    // cout<<"圓1 半徑: "<<circle_1.radius<<endl;
    // cout<<"圓2 半徑: "<<circle_2.radius<<endl;    
    // cout<<"圓1 周長: "<<circle_Girth(circle_1)<<endl;

    // cout<<"-----------------------"<<endl;
    // cout<<"Pointer"<<endl;
    // pointer_1 = new Circle;
    // pointer_1->radius = 50;
    // pointer_2 = new Circle;
    // pointer_2->radius = 12;

    // cout<<pointer_1->radius<<endl;
    // cout<<pointer_2->radius<<endl;

    

    // cout<<"-----------------------"<<endl;
    // cout<<"struct pointer parameter"<<endl;
    // Circle c1;
    // set_radius(&c1, 12);
    // cout<<"c1 radius => "<<c1.radius<<endl;
    // cout<<"c1 area => "<<circle_Area(c1)<<endl;

    // Circle *c2 = new Circle;
    // set_radius(c2, 12);
    // cout<<"c2 radius => "<<c2->radius<<endl;
    // cout<<"c2 area => "<<circle_Area(*c2)<<endl;

    /* 指標的缺陷 */
    // Circle *c3 = NULL;   // 空值，等同於 0
    // set_radius(c3, 55);
    // // cout<<circle_Area(*c3)<<endl;    // 因為該指標為空，造成程式執行中斷 (卡在那邊)

    // 解決方式
    // if (c3 != NULL) {
    //     cout<<circle_Area(*c3)<<endl;
    // }

    // c3 為空值，若不設立 if (c3 != NULL)，則不執行下方程式碼
    // cout<<"The end"<<endl;

    struct Circle c1;
    struct Circle c2;

    c1.radius = 3;
    c1.height = 1;
    c2.radius = 2;
    c2.height = 3;

    cout<<max_area(c1, c2).area<<endl;
    cout<<max_volumn(c1, c2).volume<<endl;


    // system("pause");
    return 0;
}


void printStruct_1(string time, string name, bool waterProof, short id) {
    /*
        結構成員 存取
        1. struct [結構名稱] [variable] 
        2. [結構名稱] [variable]
     */
    struct Phone phone1;
    phone1.time = time;
    phone1.name = name;
    phone1.is_waterProof = waterProof;
    phone1.id = id;

    cout<<"phone1"<<endl;
    cout<<phone1.time<<endl;
    cout<<phone1.name<<endl;
    cout<<phone1.is_waterProof<<endl;
    cout<<phone1.id<<endl;

    cout<<"phone2"<<endl;
    Phone phone2;
    phone2.time = time + "+ 30 天";
    phone2.name = name + " enterprice";
    phone2.is_waterProof = waterProof;
    phone2.id = id + 123;

    cout<<"phone1"<<endl;
    cout<<phone2.time<<endl;
    cout<<phone2.name<<endl;
    cout<<phone2.is_waterProof<<endl;
    cout<<phone2.id<<endl;
}





