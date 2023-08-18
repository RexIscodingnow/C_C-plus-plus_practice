/**
 * @file vector_start.cpp
 * @brief vector 操作
 * @version 0.1
 * @date 2023-02-06
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#include "array_function.h"


void print_vector(vector<int>& vector);
void print_vector(vector<vector<int>>& vector);

class Solution {
public:
    // vector<vector<int>> Solution::threeSum(vector<int>& nums);
};

// vector<vector<int>> Solution::threeSum(vector<int>& nums) {
//     vector<vector<int>> result;

//     sort(nums.begin(), nums.end());
//     int i = 0, j = 1, k = nums.end() - nums.begin() - 1;
//     int pivot = nums[i];
// }

double myPow(double x, int n) {
    double num = x;
    
    if (n > 0) {
        for (int i = 0; i < n-1; i++) {
            x *= num;
        }
        return x;
    }
    else if (n < 0) {
        for (int i = 0; i < (n + (n) * 2) - 1; i++) {
            x *= num;
        }
        return 1 / x;
    }
    else {
        return 1;
    }
}

int main(int argc, char const *argv[]) {
    Solution solution;

    vector<int> nums;
    vector<vector<int>> result;

    nums = {-1, 0, 1, 2, -1, -4};
    // result = solution.threeSum(nums);
    // print_vector(nums);

    // nums = {-1, 0, 1};
    // result = solution.threeSum(nums);
    // print_vector(result);

    cout<<myPow(2.0, 10)<<endl;
    cout<<myPow(2.0, -2)<<endl;

    
    // vector 初始化
    // vector<int> vector1;
    // vector<int> vector2;

    // // C++11 可直接寫成一行
    // // vector<int> vector1 = {0, 1, 2};
    // // vector<int> vector1({0, 1, 2});
    // for (int i = 0; i < 5; i++) {
    //     // 把元素加到尾端，必要時會進行記憶體配置
    //     vector1.push_back(i);
    // }
    // cout<<"vector1 => ";
    // print_vector(vector1);
    // cout<<"size => "<<vector1.size()<<endl;

    // cout<<"pop 3 elements"<<endl;
    // for (int i = 0; i < 3; i++) {
    //     vector1.pop_back();
    // }
    // print_vector(vector1);

    // 複製過去
    
    // vector ----> vector
    // vector2 = vector1;
    // vector<int> vector3(vector2);

    // array ----> vector
    // int numbers[5];
    // arange(numbers, 5, 1);
    // print_array(numbers, 5);

    // vector<int> vector_arr(numbers, numbers+5);
    // cout<<"vector_arr => ";
    // for (int i = 0; i < vector_arr.size(); i++) {
    //     cout<<vector_arr[i]<<" ";
    // }
    // cout<<endl;
    


    return 0;
}


void print_vector(vector<int>& vector) {
    for (int i = 0; i < vector.size(); i++) {
        cout<<vector[i]<<" ";
    }
    cout<<endl;
}


void print_vector(vector<vector<int>>& vector) {
    for (int i = 0; i < vector.size(); i++) {
        for (int j = 0; j < vector[0].size(); j++) {
            cout<<vector[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}


