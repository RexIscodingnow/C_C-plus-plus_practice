#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;


void printStruct_1(string time, string name, bool waterProof, short id);
void printStruct_2(int id, char *name, int score);

/* ���c�����ŧi */
struct Phone {
    string time;
    string name;
    bool is_waterProof;
    short id;
};

struct student {
    int id;
    char *name;
    int score;
};



int main(int argc, char const *argv[]) {
    string time, waterProof;
    char name[50];
    short phone_id;
    bool is_waterProof;
    cout<<"�Ͳ��ɶ�: ";
    cin>>time;
    cout<<"�~�W: ";
    gets(name);
    cout<<"������ (Y/N): ";
    cin>>waterProof;
    cout<<"id (�s��): ";
    cin>>phone_id;
    is_waterProof = waterProof == "Y"? true: false;

    printStruct_1(time, (string) name, is_waterProof, phone_id);


    system("pause");
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


void printStruct_2(int id, char *name, int score) {
    student Rex;
    Rex.id = id;
    // Rex.name -> name;
}



