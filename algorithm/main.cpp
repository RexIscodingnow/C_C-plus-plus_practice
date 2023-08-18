/**
 * @file main.cpp
 * @brief 演算法練習
 * @version 0.1
 * @date 2023-04-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

#include "../dataStructure_C++/array/vector_arr.h"
#include "search/hash_table.h"
#include "search/hashMap.h"
#include "sort/sorting.h"


struct str {
    string big_letter[6] = {"A", "B", "C", "D", "E", "F"};
    string small_letter[6] = {"g", "h", "i", "j", "k", "l"};
    string nums[10] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
} str_case;


void hashTable_testing();


int main(int argc, char const *argv[]) {

    // hashTable_testing();

    // vector<int> data = {8, 78, 3, 9, 845, 5, 4, 9623, 26, 8, 99};
    // cout<<"before:"<<endl;
    // cout<<"size: "<<data.size()<<endl;
    // print_vector<int>(data);
    // cout<<"running..."<<endl;
    // cout<<"--------------------"<<endl;

    // bubble_sort<int>(data);
    // selection_sort<int>(data);
    // quick_sort<int>(data, 0, data.size() - 1);
    // merge_sort<int>(data);

    // cout<<"--------------------"<<endl;
    // cout<<"after:"<<endl;
    // cout<<"size: "<<data.size()<<endl;
    // print_vector<int>(data);

    srand(time(NULL));

    int n = 10;
    vector<int> data_1;
    vector<int> data_2;

    for (int i = 0; i < n; i++) {
        int element = rand() % 100;
        data_1.push_back(element);
    }

    for (int i = 0; i < n; i++) {
        int element = rand() % 100;
        data_2.push_back(element);
    }

    cout<<"before:"<<endl;
    print_vector<int>(data_1);
    cout<<endl;
    // print_vector<int>(data_2);

    merge_sort(data_1);

    // bubble_sort<int>(data_1);
    // bubble_sort<int>(data_2);

    // cout<<"after:"<<endl;
    // print_vector<int>(data_1);
    // print_vector<int>(data_2);

    // cout<<"final:"<<endl;



    return 0;
}


void hashTable_testing() {
    HashTable hash_table(50);

    const int n1 = 10, n2 = 100;

    // 未發生碰撞   -- 連續資料
    // for (int i = 0; i < 100; i++) {
    //     if (i < 50) {
    //         hash_table.insert(to_string(i + n1));
    //     } else {
    //         hash_table.insert(to_string(i + n2));
    //     }
    // }

    // 隨機字串
    srand(time(NULL));
    
    int big_len = end(str_case.big_letter) - begin(str_case.big_letter);
    int small_len = end(str_case.small_letter) - begin(str_case.small_letter);
    int nums_len = end(str_case.nums) - begin(str_case.nums);

    for (int i = 0; i < 102; i++) {
        int choose = rand() % 3 + 1;
        int index = 0;
        string value;

        switch (choose) {
            case 1:
                index = rand() % big_len;
                value = str_case.big_letter[index] + to_string(i) + str_case.big_letter[index];
                break;
            case 2:
                index = rand() % small_len;
                value = str_case.small_letter[index] + to_string(i) + str_case.small_letter[index];
                break;
            
            default:
                index = rand() % nums_len;
                value = str_case.nums[index] + to_string(i) + str_case.nums[index];
                break;
        }

        hash_table.insert(value);
    }


    hash_table.view_buckets(10);
}





