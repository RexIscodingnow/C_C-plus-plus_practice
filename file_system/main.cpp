/**
 * @file main.cpp
 * @author RexIscodingnow
 * @brief Side-project Pratice: File manage-system
 * @details 
 *      1. Language: C++, Python.
 *          1-1. C++: Implemented write, search, delete in file
 *          1-2. Python: Provide the GUI
 * 
 * @version 0.1
 * @date 2023-06-10
 * 
 * @copyright Copyright (c) 2023
 * 
 */


#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <ctime>


#include "../array_function.h"
#include "../dataStructure_C++/array/vector_arr.h"

using namespace std;


// void qsort(int* array, int low, int high);
void qsort(vector<int>& array, int low, int high);


int main(int argc, char const *argv[]) {
    srand(time(0));

    vector<int> array(10);

    for (int i = 0; i < array.size(); i++) {
        int r = rand() % 10 + 1;
        array[i] = r;
    }
    cout<<"origin: ";
    print_vector<int>(array);
    qsort(array, 0, 10);
    print_vector<int>(array);


    return 0;
}


void qsort(vector<int>& array, int low, int high) {
    if (low >= high) {
        return;
    }

    int i = low;
    int j = high == array.size() ? high-1: high;
    int pivot = array[low];

    while (i != j) {
        while (pivot <= array[j] && i < j) {
            j--;
        }
        while (pivot >= array[i] && i < j) {
            i++;
        }
        
        if (i < j) {
            swap<int>(array[i], array[j]);
        }
    }
    
    swap<int>(array[low], array[i]);
    print_vector<int>(array);

    qsort(array, low, i - 1);
    qsort(array, i + 1, high);
}



// void qsort(int* array, int low, int high) {
//     if (low >= high) {
//         return;
//     }

//     int i = low;
//     int j = high;
//     int pivot = array[low];

//     while (i != j) {
//         while (pivot <= array[j] && i < j) {
//             j--;
//         }
//         while (pivot >= array[i] && i < j) {
//             i++;
//         }
        
//         if (i < j) {
//             swap<int>(array[i], array[j]);
//         }
//     }
    
//     swap<int>(array[low], array[i]);

//     qsort(array, low, i - 1);
//     qsort(array, i + 1, high);
// }







