#include <iostream>
#include <string>

using namespace std;


void myarray(int array[], int len);
bool isVaild(string s);

int main(int argc, char const *argv[]) {
    /*
        �}�C�P�禡
     */
    int len;

    cout<<"�}�C���� => ";
    cin>>len;
    int array[len];
    for (int i = 0; i < len; i++) {
        array[i] = (i + 1);
    }
    
    cout<<"������}�C => ";
    for (int i = 0; i < len; i++) {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    
    cout<<"��Ӱ}�C�ǵ��禡 => ";
    myarray(array, len);
    for (int i = 0; i < len; i++) {
        cout<<array[i]<<" ";
    }


    return 0;
}


void myarray(int array[], int len) {
    for (int i = 0; i < len; i++) {
        array[i] += 10;
    }
}


bool isVaild(string s) {
    /* ��٬A���ˬd�� */
    int len = s.size();


    return true;
}

