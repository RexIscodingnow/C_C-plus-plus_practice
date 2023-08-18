#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;


#include "struct.h"



/* ��L�禡 */
void printStruct_1(string time, string name, bool waterProof, short id);


/* ���c�����ŧi */
struct Phone {
    string time;
    string name;
    bool is_waterProof;
    short id;
};


int main(int argc, char const *argv[]) {
    /*
     * Struct �@���ܼ� �P �����ܼƨϥΤ覡
     */
    // cout<<"-----------------------"<<endl;
    // cout<<"Variable"<<endl;
    // circle_1.radius = 2;
    // circle_1.height = 10;
    // circle_2.radius = 3; 
    // circle_2.height = 20;

    // cout<<"��1 �b�|: "<<circle_1.radius<<endl;
    // cout<<"��2 �b�|: "<<circle_2.radius<<endl;    
    // cout<<"��1 �P��: "<<circle_Girth(circle_1)<<endl;

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

    /* ���Ъ��ʳ� */
    // Circle *c3 = NULL;   // �ŭȡA���P�� 0
    // set_radius(c3, 55);
    // // cout<<circle_Area(*c3)<<endl;    // �]���ӫ��Ь��šA�y���{�����椤�_ (�d�b����)

    // �ѨM�覡
    // if (c3 != NULL) {
    //     cout<<circle_Area(*c3)<<endl;
    // }

    // c3 ���ŭȡA�Y���]�� if (c3 != NULL)�A�h������U��{���X
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
        ���c���� �s��
        1. struct [���c�W��] [variable] 
        2. [���c�W��] [variable]
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
    phone2.time = time + "+ 30 ��";
    phone2.name = name + " enterprice";
    phone2.is_waterProof = waterProof;
    phone2.id = id + 123;

    cout<<"phone1"<<endl;
    cout<<phone2.time<<endl;
    cout<<phone2.name<<endl;
    cout<<phone2.is_waterProof<<endl;
    cout<<phone2.id<<endl;
}





