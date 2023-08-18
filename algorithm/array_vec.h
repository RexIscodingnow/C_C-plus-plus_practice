/**
 * @file array_vec.h
 * @brief 陣列資料 use vector (for test case)
 * @version 0.1
 * @date 2023-04-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <vector>
#include <ctype.h>
// #include <stdlib.h>
// #include <time.h>

using namespace std;


// T => 基本型別
template<typename T>
class Array {
private:
    vector<T> array_1D;
    // vector<vector<T>> array_2D;
    int row;
    // int col;

public:
    Array(int row) {
        this->row = row;
    }
    // Array(int row, int column) {
    //     this->row = row;
    //     this->col = column;
    // }

    // 印陣列
    void print();

    vector<T> array() { return this->array_1D; }

    // 安排數值 小 到 大
    void arange(T start = 0) {
        if (this->row) {
            for (int i = 0; i < this->row; i++) {
                this->array_1D.push_back(start);
                start++;
            }
        }

        // else if (this->row && this->col) {
        //     for (int i = 0; i < this->row; i++) {
        //         vector<T> arr;
        //         for (int j = 0; j < this->col; j++) {
        //             arr.push_back(start);
        //             start++;
        //         }
        //         this->array_2D.push_back(arr);
        //     }
        // }
    }

    void custom(string arr) {
        int i = 0;
        while (i < arr.size()) {
            // if (isdigit(arr[i])) {}
            this->array_1D.push_back();

            i++;
        }
    }


    // 隨機亂數
    // void random() {
    //     srand(time(0));

    //     if (this->row) {
    //         int k = 0;
    //         for (int i = 0; i < this->array_1D.size(); i++) {
    //             T r = rand();
    //             // this->array_1D.push_back(r);
    //             cout<<r<<endl;
    //             k++;
    //         }
    //     }
    // }

};


template<typename T>
void Array<T>::print() {
    if (this->array_1D.size() != 0) {
        cout<<"{";
        for (int i = 0; i < array_1D.size(); i++) {
            if (i < array_1D.size() - 1) {
                cout<<this->array_1D[i]<<", ";
            } else {
                cout<<this->array_1D[i];
            }
        }
        cout<<"}";
        cout<<endl;
    }
    // if (this->array_2D.size() != 0) {
    //     cout<<"{";
    //     for (int i = 0; i < this->array_2D.size(); i++) {
    //         cout<<"{";
    //         for (int j = 0; j < this->array_2D[i].size(); j++) {
    //             if (j < array_2D[i].size() - 1) {
    //                 cout<<this->array_2D[i][j]<<", ";
    //             } else {
    //                 cout<<this->array_2D[i][j];
    //             }
    //         }
    //         cout<<"}";
    //     }
    //     cout<<"}";
    //     cout<<endl;
    // }
}


