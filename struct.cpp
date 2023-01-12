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


struct Circle {
    int radius;
    int height;
    double girth;
    double area;
    double volume;
} circle_1, circle_2,
  *pointer_1, *pointer_2;


int main(int argc, char const *argv[]) {

    cout<<"-----------------------"<<endl;
    cout<<"Variable"<<endl;
    circle_1.radius = 2;
    cout<<circle_1.radius<<endl;
    circle_2.radius = 3;
    cout<<circle_2.radius<<endl;

    cout<<"-----------------------"<<endl;
    cout<<"Pointer"<<endl;
    pointer_1 = new Circle;
    pointer_1->radius = 50;
    cout<<pointer_1->radius<<endl;
    pointer_2 = new Circle;
    pointer_2->radius = 12;
    cout<<pointer_2->radius<<endl;


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





