/**
 * @file general.h
 * @version 0.1
 * @date 2023-04-12
 * 
 * @copyright Copyright (c) 2023
 * 
 * @brief 排序法 (for noob)
 * @details 使用之參數型別: Reference of vector
 */

#include <iostream>
#include <vector>

using namespace std;


template<typename T>
void exChange(T &data_1, T &data_2);

// =========================================================
// =========================================================

template<typename T>
void bubble_sort(vector<T>& data);

template<typename T>
void selection_sort(vector<T>& data);

template<typename T>
void insert_sort(vector<T>& data);

// 上方
// Time Complexity 最壞情況: O (n ^ 2)
// Space Complexity 皆為: O(1)
// =========================================================

template<typename T>
void quick_sort(vector<T>& data, int left, int right);

template<typename T>
void merge_sort(vector<T>& data);

template<typename T>
void _merge_sort(vector<T>& data, int low, int high);

template<typename T>
void merge(vector<T>& data, int low, int mid, int high);

// 交換數值
template<typename T>
void exChange(T &data_1, T &data_2) {
    T temp = data_1;
    data_1 = data_2;
    data_2 = temp;
}



// 泡沫排序法 => O(n ^ 2)
template<typename T>
void bubble_sort(vector<T>& data) {
    /*
        適用場景: 資料量小
        algorthim 方式: 暴力解、土法煉鋼 (應該...)
     */
    for (int i = 0; i < data.size(); i++) {
        for (int j = 0; j < data.size(); j++) {
            if (data[i] < data[j]) {
                exChange<T>(data[i], data[j]);
            }
        }
    }
}

// 選擇排序法 => O(n ^ 2)
template<typename T>
void selection_sort(vector<T>& data) {
    /*
        適用場景: 資料量小

        algorithm 方式: 
     */
    for (int i = 0; i < data.size(); i++) {
        int min_index = i;  // 當前最小值的索引值 (比對用標竿)

        for (int j = i+1; j < data.size(); j++) {   // 排過的位置不用再重複
            // 比標竿小，就更換標竿索引值
            if (data[j] < data[min_index]) {
                min_index = j;
            }
        }
        if (min_index != i) {   // 標竿與要交換者，索引值重疊不換
            exChange<T>(data[i], data[min_index]);
        }
    }
}


template<typename T>
void insert_sort(vector<T>& data) {
    /*
        適用場景: 大部分以排序者適用
     */
}

// 快速排序法 => O(n log n)
template<typename T>
void quick_sort(vector<T>& data, int left, int right) {
    /*
        : param data: 排序資料
        : param left: 左邊指標 (切分狀態的所處位置)
        : param right: 右邊指飆 (切分狀態的所處位置)

        algorithm 方式: divide and conquer
                        -- 分治法，或叫做 分而分治之演算法
     */
    if (left >= right) {   // 左邊索引值超過右邊 (含相遇)，意味著排好，中斷執行
        // print_vector<T>(data);
        return;
    }
    
    int i = left;   // 左邊，當下比對
    int j = right;  // 右邊，當下比對
    T pivot = data[left];   // 標竿，比對基準值

    while (i != j) {
        while (data[j] >= pivot && i < j) {   // 比標竿大，往左邊靠攏
            j--;
        }
        while (data[i] <= pivot && i < j) {   // 比標竿小，往右邊靠攏
            i++;
        }
        
        if (i < j) {
            T temp = data[i];
            data[i] = data[j];
            data[j] = temp;
        }
    }

    // 更換標竿，值為當前位於左邊的數值，兩兩交換
    data[left] = data[i];
    data[i] = pivot;

    // 切成兩塊區域
    // 1. 左半邊數值偏小
    // 2. 右半邊數值偏大
    quick_sort<T>(data, left, i-1);   // 左半邊，往左內縮
    quick_sort<T>(data, i+1, right);  // 右半邊，往右內縮
}


template<typename T>
void merge_sort(vector<T>& data) {
    _merge_sort<T>(data, 0, data.size());
}

template<typename T>
void _merge_sort(vector<T>& data, int low, int high) {
    if (low < high) {
        int mid = low + (high - low) / 2;
        // int mid = (low + high) / 2;

        _merge_sort<T>(data, low, mid);
        _merge_sort<T>(data, mid+1, high);

        merge<T>(data, low, mid, high);
        print_vector<int>(data);
    }
}


template<typename T>
void merge(vector<T>& data, int low, int mid, int high) {
    int left_size = mid - low + 1;
    int right_size = high - mid;

    vector<T> left;
    vector<T> right;

    // 分配左右邊資料
    for (int i = 0; i < left_size; i++) {
        left.push_back(data[low + i]);
    }
    for (int i = 0; i < right_size; i++) {
        right.push_back(data[mid + i + 1]);
    }

    // merge
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < left_size && j < right_size) {
        if (left[i] < right[j]) {
            data[k] = left[i];
            i++;
        } else {
            data[k] = right[j];
            j++;
        }
    
        k++;
    }

    // 還有剩下的 (left or right)
    while (i < left_size - 1) {
        data[k] = left[i];
        i++;
        k++;
    }

    while (j < right_size - 1) {
        data[k] = right[j];
        j++;
        k++;
    }
}

