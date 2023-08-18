/**
 * @file array_ptr.h
 * @version 0.1
 * @date 2023-03-18
 * 
 * @copyright Copyright (c) 2023
 * 
 * @brief Operation of array with pointer from C++
 * @details 使用指標操作陣列資料
 */

#include <iostream>


using namespace std;


class PtrArray {
public:
    // Constructor
    PtrArray(int *array_1D, int row);
    PtrArray(int **array_2D, int row, int column);
    // ~PtrArray();

    // 一維遞增
    // 二維遞增
    void arange(int start=0);

    // 外部用
    static void printArray(int *array, int row) {
        cout<<"{";
        for (int i = 0; i < row; i++) {
            if (i < row - 1) {
                cout<<array[i]<<", ";
            
            } else {
                cout<<array[i]<<"}";
            }
        }
    }
    static void printArray(int **array, int row, int column) {
        for (int i = 0; i < row; i++) {
            cout<<"{";
            for (int j = 0; j < column; j++) {
                if (j < column - 1) {
                    cout<<array[i][j]<<", ";
                } else {
                    cout<<array[i][j]<<"}";
                }
            }
            cout<<endl;
        }
    }

private:
    int row;
    int column;
    int *array_1D;  // 1 dimensional array
    int **array_2D;  // 2 dimensional array
};

PtrArray::PtrArray(int *array_1D, int row) {
    this->row = row;
    this->array_1D = array_1D;
}
PtrArray::PtrArray(int **array_2D, int row, int column) {
    this->row = row;
    this->column = column;
    this->array_2D = array_2D;
}


void PtrArray::arange(int start) {
    if (this->array_1D != NULL){
        for (int i = 0; i < row; i++) {
            this->array_1D[i] = start;
            start++;
        }
    }
    if (this->array_2D != NULL) {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                this->array_2D[i][j] = start;
                start++;
            }
        }
    }
}
