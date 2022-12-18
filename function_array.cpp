#include <iostream>
#include <string>

using namespace std;


void myarray(int array[], int len);
bool isVaild(string s);

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
    
    cout<<"原先的陣列 => ";
    for (int i = 0; i < len; i++) {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    
    cout<<"整個陣列傳給函式 => ";
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
    /* 對稱括號檢查器 */
    int len = s.size();


    return true;
}

