/**
 * @file class_object.cpp
 * @author your name (you@domain.com)
 * @brief ��@: ���O�P����
 * @version 0.1
 * @date 2023-01-17
 * 
 * @copyright Copyright (c) 2023
 * 
 */


#include <iostream>
#include <string.h>

using namespace std;

/* Array �ާ@ */
#include "array_function.h"

/* C++ class ��@���Y�� */
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
    // cout<<"�P��: "<<calculate.girth()<<endl;
    // cout<<"���n: "<<calculate.area()<<endl;
    
    int numbers_1[5] = {12, 15, 1, 24, 35};
    int numbers_2[5] = {1, 24, 16, 78, 4};

    // print_array(numbers_1, 6);


    return 0;
}





