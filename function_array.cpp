#include <iostream>
using namespace std;

void oneNumber(int num);
void myarray(int array[], int len);


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

    cout<<"����ƭ� => ";
    for (int i = 0; i < len; i++) {
        cout<<array[i]<<" ";
    }
    cout<<endl;

    oneNumber(array[0]);
    
    cout<<"��Ӱ}�C�ǵ��禡 => ";
    myarray(array, len);
    for (int i = 0; i < len; i++) {
        cout<<array[i]<<" ";
    }

    return 0;
}

void oneNumber(int num) {
    num += 10;
    cout<<"��@�ƭ� = "<<num<<endl;
}

void myarray(int array[], int len) {
    for (int i = 0; i < len; i++) {
        array[i] += 10;
    }
}



