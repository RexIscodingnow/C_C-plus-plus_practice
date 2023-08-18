/**
 * @file test_case.h
 * @author RexIscodingnow (Rex)
 * @version 0.1
 * @date 2023-05-06
 * 
 * @copyright Copyright (c) 2023
 * 
 * @brief leetcode ½m²ß
 * @details It is used for "Test Case" on "Easy" Diffiulty Question from leetcode.
 */

#include <iostream>
#include <string>
#include <vector>

// ´N¦L vector ¤º®e
#include "../../../dataStructure_C++/array/vector_arr.h"


namespace Easy_TestCase {
    class TwoSum {
        vector<int> arr(int option=1) {
            vector<int> nums;

            switch (option) {
                case 2: nums = {3, 2, 4}; break;
                case 3: nums = {10, 8, 2, 5}; break;
                default: nums = {2, 7, 11, 15}; break;
            }

            return nums;
        }

        int target(int option=1) {
            int target_num;
            
            switch (option) {
                case 2: target_num = 6; break;
                case 3: target_num = 12; break;
                default: target_num = 9; break;
            }
        }
    };
}


