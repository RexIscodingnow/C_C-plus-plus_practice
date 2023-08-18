/**
 * @file vector_arr.h
 * @version 0.1
 * @date 2023-04-10
 * 
 * @copyright Copyright (c) 2023
 * 
 * @brief Operation of array with vector from C++
 * @details 使用容器操作陣列資料
 */

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// ============================================================================
// ============================================================================
// ============================================================================


/**
 * @brief print 2 dimensional vector (2D vector)
 * 
 * @param array_2D 2D vector
 * @param cut_line 切分之每組數量
 */
template<typename dtype>
void print_vector(vector<vector<dtype>>& array_2D, int cut_line=0) {
    cout<<"{";
    for (int i = 0; i < array_2D.size(); i++) {
        cout<<"{";
        for (int j = 0; j < array_2D[0].size(); j++) {
            if (j < array_2D[0].size() - 1) {
                cout<<array_2D[i][j]<<", ";
            } else {
                if (i < array_2D.size() - 1) {
                    cout<<array_2D[i][j]<<"}, ";
                    if (cut_line > 0 && i % cut_line == cut_line - 1) {
                        cout<<endl;
                        cout<<">----------------------< ("<<i+1<<") line"<<endl;
                    }
                    cout<<endl<<" ";
                } else {
                    cout<<array_2D[i][j]<<"}}";
                    if (cut_line > 0) {
                        cout<<endl;
                        cout<<">----------------------< ("<<i+1<<") line"<<endl;
                    }
                }
            }
        }
    }
    cout<<endl;
}


/**
 * @brief print 1 dimension vector (1D vector)
 * 
 * @param array_1D 1D vector
 */
template<typename dtype>
void print_vector(vector<dtype>& array_1D) {
    cout<<"{";
    for (int i = 0; i < array_1D.size(); i++) {
        if (i < array_1D.size() - 1) {
            cout<<array_1D[i]<<", ";
        } else {
            cout<<array_1D[i]<<"}";
        }
    }
    cout<<endl;
}


/**
 * @brief 遞增給數值
 * 
 * @tparam T 
 * @param array_2D 2D vector
 * @param start 起始數值
 */
template<typename T>
void arange(vector<vector<T>>& array_2D, T start=0) {
    int row = array_2D.size();
    int col = array_2D[0].size();

    if (row <= 0 || col <= 0) {
        throw "Total length of 2D Vector must be over than 0.";
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            array_2D[i][j] = start;
            start++;
        }
    }
}


/**
 * @brief 遞增給數值
 * 
 * @tparam T 
 * @param array_1D 1D vector
 * @param start 起始數值
 */

template<typename T>
void arange(vector<T>& array_1D, T start=0) {
    int row = array_1D.size();

    if (row <= 0) {
        throw "Total length of 1D Vector must be over than 0.";
    }

    for (int i = 0; i < row; i++) {
        array_1D[i] = start;
        start++;
    }
}


// ============================================================================
// ============================================================================
// ============================================================================


template<typename dtype>
class VectorArray {
private:
    int row;
    int col;

public:
    vector<dtype> array_1D;
    vector<vector<dtype>> array_2D;

    VectorArray(vector<dtype>& arr_1D) {
        row = arr_1D.size();

        this->array_1D = arr_1D;
    }

    VectorArray(vector<vector<dtype>>& arr_2D) {
        row = arr_2D.size();
        col = arr_2D[0].size();
        this->array_2D = arr_2D;
    }

    vector<dtype> shape() {
        vector<int> shape = {this->row};
        if (col >= 0) {
            shape.push_back(this->col);
            return shape;
        }

        return shape;
    }

    // =========================================================
    // =========================================================
    // =========================================================

    // 一維遞增
    // 二維遞增
    // param: start: 起始數值
    // param: increase: 遞增開關，預設: 開
    void arange(dtype start = 0, bool increase=true);

};


template<typename dtype>
void VectorArray<dtype>::arange(dtype start, bool increase) {
    if (col > 0) {
        for (int i = 0; i < row; i++) {
            vector<dtype> arr;
            for (int j = 0; j < col; j++) {
                arr.push_back(start);
                if (increase) {
                    start++;
                }
            }
            array_2D.push_back(arr);
            arr.~vector();   // 清除原資料
        }

        // print_vector<dtype>(array_2D);
    }
    else {
        for (int i = 0; i < row; i++) {
            array_1D.push_back(start);
            start++;
        }
        // print_vector<dtype>(array_1D);
    }
}





