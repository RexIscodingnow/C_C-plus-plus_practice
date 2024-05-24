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


// 若第一次引入本檔案，則進入 #define 先定義 __VECTOR_ARR__
// 
// 反之，第二次或二次以上，則 #ifndef 會不成立，因為已經定義過 __VECTOR_ARR__
// 因此，會被跳過整個 #ifndef 到 #endif 之間的區塊的內容，從而避免了重複定義
// 
#ifndef __VECTOR_ARR__
#define __VECTOR_ARR__

#include <iostream>
#include <algorithm>
#include <vector>
#include <regex>


using namespace std;


// template<typename T>
// int get_number_of_digits(T number) {
//     if (isalpha())
// }



// ============================================================================
// ============================================================================
// ============================================================================


/**
 * @brief print 1 dimension vector (1D vector)
 * 
 * @param array_1D 1D vector
 */
template<typename T>
void print_vector(vector<T>& array_1D) {
    cout<<"{ ";
    
    if (array_1D.size() == 0) {
        cout<<" }"<<endl;
        return;
    }

    for (int i = 0; i < array_1D.size(); i++) {
        if (i < array_1D.size() - 1) {
            cout<<array_1D[i]<<", ";
        } else {
            cout<<array_1D[i]<<" }";
        }
    }
    cout<<endl;
}


/**
 * @brief print 2 dimensional vector (2D vector)
 * 
 * @param array_2D 2D vector
 * @param cut_line 切分之每組數量，附上行號
 * 
 */
template<typename T>
void print_vector(vector<vector<T>>& array_2D, int cut_line = 0) {
    cout<<"{";
    
    if (array_2D.size() == 0 || array_2D[0].size() == 0) {
        cout<<"{ }}"<<endl;
        return;
    }
    
    for (int i = 0; i < array_2D.size(); i++) {
        cout << "{ ";
        
        for (int j = 0; j < array_2D[i].size(); j++) {
            if (j < array_2D[i].size() - 1) {
                cout << array_2D[i][j] << ", ";
            }
            
            else {
                if (i < array_2D.size() - 1) {
                    cout << array_2D[i][j] << " }, ";
                    
                    if (cut_line > 0 && i % cut_line == cut_line - 1) {
                        cout<<endl<<endl;
                        cout<<">----------------------< ("<<i+1<<") line"<<endl;
                    }
                    cout<<endl<<" ";
                }
                
                else {
                    cout << array_2D[i][j] << " }}";
                    
                    if (cut_line > 0) {
                        cout<<endl<<endl;
                        cout<<">----------------------< ("<<i+1<<") line"<<endl;
                    }
                }
            }
        }
    }
    cout<<endl;
}



/**
 * @brief 遞增給數值
 * 
 * @tparam T 
 * @param array_2D 2D vector  (m * n)
 * @param start 起始數值
 */
template<typename T>
void arange(vector<vector<T>>& array_2D, T start = 0, bool _reverse = false) {
    int row = array_2D.size();
    int col = array_2D[0].size();

    if (row <= 0 || col <= 0) {
        throw "Total length of 2D Vector must be over than 0.";
    }

    for (int i = 0; i < row; i++) {
        col = array_2D[i].size();

        for (int j = 0; j < col; j++) {
            array_2D[i][j] = start;
            start++;
        }

        if (_reverse == true) {
            reverse(array_2D[i].begin(), array_2D[i].end());
        }
    }

    if (_reverse == true) {
        reverse(array_2D.begin(), array_2D.end());
    }
}


template<typename T>
void print_vector(vector<vector<vector<T>>>& array_3D) {
    cout << "{" <<endl;
    
    for (auto vec_2d : array_3D) {
        cout << "\t{" << endl;
        
        for (auto vec : vec_2d) {
            cout << "\t\t";
            print_vector<int>(vec);
        }

        cout << "\t}" <<endl;
    }

    cout << "}" <<endl;    
}


/**
 * @brief 遞增給數值
 * 
 * @tparam T 
 * @param array_1D 1D vector
 * @param start 起始數值
 */

template<typename T>
void arange(vector<T>& array_1D, T start=0, bool _reverse = false) {
    int row = array_1D.size();

    if (row <= 0) {
        throw "Total length of 1D Vector must be over than 0.";
    }

    for (int i = 0; i < row; i++) {
        array_1D[i] = start;
        start++;
    }

    if (_reverse == true) {
        reverse(array_1D.begin(), array_1D.end());
    }
}


#endif
