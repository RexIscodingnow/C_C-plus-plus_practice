/**
 * @file vector_operate.cpp
 * @version 0.1
 * @date 2023-06-18
 * 
 * @copyright Copyright (c) 2023
 * 
 * @brief vector 內建函式操作
 */

#include <iostream>
#include <vector>
#include <string>


using namespace std;


#include "dataStructure_C++/array/vector_arr.h"   // 印 vector


int main(int argc, char const *argv[]) {
    vector<int> vec;
    
    try {
        arange<int>(vec, 0);
        print_vector<int>(vec);
        vector<int> slicing(vec.begin() + 2, vec.end() - 1);
        vec = slicing;
        print_vector<int>(vec);
    } catch (const char *msg) {
        cout<<msg<<endl;
    }




    return 0;
}





