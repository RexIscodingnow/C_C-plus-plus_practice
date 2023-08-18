/**
 * @file class_object.cpp
 * @author your name (you@domain.com)
 * @brief 實作: 類別與物件
 * @version 0.1
 * @date 2023-01-17
 * 
 * @copyright Copyright (c) 2023
 * 
 */


#include <iostream>
#include <string.h>

using namespace std;

/* Array 操作 */
#include "array_function.h"

/* C++ class 實作標頭檔 */
#include "class_object.h"

void print() {
    int arr[5] = {0};
    for (int i = 0; i < sizeof(arr)/sizeof(int); i++) {
        cout<<arr[i]<<" ";
    }
}


int main(int argc, char const *argv[]) {
    Class_Objects calculate;
    calculate.radius = 3;
    // cout<<"周長: "<<calculate.girth()<<endl;
    // cout<<"面積: "<<calculate.area()<<endl;
    
    int numbers_1[5] = {12, 15, 1, 24, 35};
    int numbers_2[5] = {1, 24, 16, 78, 4};

    // print_array(numbers_1, 6);


    return 0;
}





