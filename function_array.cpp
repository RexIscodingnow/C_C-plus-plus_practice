#include <iostream>
using namespace std;

void oneNumber(int num);
void myarray(int array[], int len);


int main(int argc, char const *argv[]) {
    /*
        陣列與函式
     */
    int len;

    cout<<"陣列長度 => ";
    cin>>len;
    int array[len];
    for (int i = 0; i < len; i++) {
        array[i] = (i + 1);
    }

    cout<<"原先數值 => ";
    for (int i = 0; i < len; i++) {
        cout<<array[i]<<" ";
    }
    cout<<endl;

    oneNumber(array[0]);
    
    cout<<"整個陣列傳給函式 => ";
    myarray(array, len);
    for (int i = 0; i < len; i++) {
        cout<<array[i]<<" ";
    }

    return 0;
}

void oneNumber(int num) {
    num += 10;
    cout<<"單一數值 = "<<num<<endl;
}

void myarray(int array[], int len) {
    for (int i = 0; i < len; i++) {
        array[i] += 10;
    }
}



