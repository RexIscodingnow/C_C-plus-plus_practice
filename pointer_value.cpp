/*
    ���нm��
 */

// ���ب禡�w
#include <iostream>
using namespace std;
#include <string.h>

// �ۭq�禡�w
#include "pointer_function.h"

int main(int argc, char const *argv[]) {
    /*
        ���Ыŧi �P �ϥ�
     */
    
    // 1. �ŧi���� (�즸����)

    // ���@���ܼ� �� "�O�����}"
    // int a;
    // cout<<"a = ";
    // cin>>a;
    // int *p;   // �ŧi ����
    // p = &a;   // ���� �@���ܼ� a ���O�����}�A�ϥ� & �Ÿ����}

    // cout<<"p ���O�����}: "<<p<<endl<<"p ���O����Ŷ�������: "<<*p<<endl;
    
    // �ѩ� �ܼ� a ��"�a�}"���F ���� p�A�]�� p ���ܡA�ܼ� a �]�|�ܰ�
    // cout<<"p ���O����Ŷ�������: ";
    // cin>>*p;
    // cout<<"p ���O����Ŷ�������: "<<*p<<endl<<"a = "<<a;

    // �ϥ�����r new [��ƫ��O];
    // int *n = new int;   // �t�m�@�ӷs�� �O����Ŷ��A�ç� "�a�}" ���F���� n
    // cout<<"*n = ";
    // cin>>*n;
    // cout<<"n ���O�����}: "<<n<<endl<<"n ���Ŷ�������: "<<*n<<endl;

    // 2. ����O���� (�Y�h���}�l)
    // int *m = new int;

    // char str[6];

    // �ϥ�����r delete [���ЦW��];
    // cout<<"*m = ";
    // cin>>*m;
    // cout<<"m = "<<m<<endl<<"*m = "<<*m<<endl;
    
    // cout<<"��J \"delete\" ���񱼫��� m "<<endl;
    // cout<<"��J \"done\" �����o�^�X(�~ "<<endl;
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
    //     cout<<"����"<<endl<<endl<<"�L�X..."<<endl;
    // }

    // cout<<"m = "<<m<<endl<<"*m = "<<*m<<endl;

    // 3. const �P ����

    // const type *name
    // int num;

    // cout<<"num => ";
    // cin>>num;

    // const int *NUMBER = &num;
    // cout<<"int num = "<<num<<endl<<"NUMBER = "<<*NUMBER<<endl<<"const int *NUMBER = "<<NUMBER<<endl;

    // *NUMBER = 52;   // ���i�ܰʩ�
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
    // NUMBER2 = new int;   // ���i�H�A���s����

    /*
        �禡 �P ����
     
        �ϥ� "pointer_function.h" ���Y�禡�w
     */
    int a = 1;
    getAddress_1(&a);
    cout<<"a = "<<a<<endl;  

    int *n = getAddress_2();
    cout<<"n = "<<n<<endl<<"*n = "<<*n<<endl;

    return 0;
}


