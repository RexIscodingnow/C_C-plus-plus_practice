#include <iostream>
#include <string>

using namespace std;


void myarray(int array[], int len);
bool isVaild(string s);

#include "array_function.h"

void quickSort(int *array, int left, int right);

int main(int argc, char const *argv[]) {
    /*
        陣列與函式
     */
    // int len;

    // cout<<"陣列長度 => ";
    // cin>>len;
    // int array[len];
    // for (int i = 0; i < len; i++) {
    //     array[i] = (i + 1);
    // }
    
    // cout<<"原先的陣列 => ";
    // for (int i = 0; i < len; i++) {
    //     cout<<array[i]<<" ";function_array.cpp
    // }
    // cout<<endl;
    
    // cout<<"整個陣列傳給函式 => ";
    // myarray(array, len);
    // for (int i = 0; i < len; i++) {
    //     cout<<array[i]<<" ";
    // }


    int array[5] = {12, -484, 1, 484, 3};
    quickSort(array, 0, 5);
    
    print_array(array, 5);


    return 0;
}


void quickSort(int *array, int left, int right) {
    // quick sort
    if (left > right) {
        return;
    }
    int i = left, j = right;
    int pivot = array[left];

    while (i != j) {
        while (pivot <= array[j] && i < j) { j--; }
        while (pivot >= array[i] && i < j) { i++; }

        if (i < j) {
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }
    array[left] = array[i];
    array[i] = pivot;
    
    quickSort(array, i, j-1);
    quickSort(array, i+1, j);
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

