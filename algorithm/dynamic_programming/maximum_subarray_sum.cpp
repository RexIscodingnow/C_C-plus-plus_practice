#include <iostream>
#include <vector>
#include "../../dataStructure_C++/array/vector_arr.h"


int max_subarray_sum(vector<int>& array) {
    int n = array.size(), current_sum = array[0], max_sum = array[0];

    for (int i = 1; i < n; i++) {
        current_sum += array[i];

        if (current_sum < array[i]) {
            current_sum = array[i];
        }

        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    return max_sum;
}


vector<int> max_subarray_sum_to_vec(vector<int> array) {
    int n = array.size(), current_sum = array[0], max_sum = array[0];
    int left_bound = 0, right_bound = 0, tmp_left_bound = 0;

    // cout << "L  R" << endl;

    for (int i = 1; i < n; i++) {
        current_sum += array[i];

        if (current_sum < array[i]) {
            current_sum = array[i];

            tmp_left_bound = i;
        }

        if (current_sum > max_sum) {
            max_sum = current_sum;
            
            left_bound = tmp_left_bound;
            right_bound = i;
        }
        // cout << left_bound << "  " << right_bound << endl;
    }

    // cout << (right_bound - left_bound + 1) << endl;

    return vector<int>(array.begin() + left_bound, array.begin() + left_bound + (right_bound - left_bound) + 1);
}


int main(int argc, char const *argv[]) {
    
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};

    cout << "nums = ";
    print_vector<int>(nums);
    cout << endl;
    cout << "maximum sub-array sum: ";
    cout << max_subarray_sum(nums) << endl;
    vector<int> result = max_subarray_sum_to_vec(nums);
    cout << "sub-array: ";
    print_vector<int>(result);
    cout << endl;

    nums = {1};
    cout << "nums = ";
    print_vector<int>(nums);
    cout << endl;
    cout << "maximum sub-array sum: ";
    cout << max_subarray_sum(nums) << endl;
    result = max_subarray_sum_to_vec(nums);
    cout << "sub-array: ";
    print_vector<int>(result);
    cout << endl;
    
    nums = {5,4,-1,7,8};
    cout << "nums = ";
    print_vector<int>(nums);
    cout << endl;
    cout << "maximum sub-array sum: ";
    cout << max_subarray_sum(nums) << endl;
    result = max_subarray_sum_to_vec(nums);
    cout << "sub-array: ";
    print_vector<int>(result);
    cout << endl;

    return 0;
}

