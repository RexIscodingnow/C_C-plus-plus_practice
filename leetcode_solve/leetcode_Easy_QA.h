#include <iostream>
#include <string>
#include <vector>

using namespace std;


namespace leetcode_P1_P2 {
    /* (註: 第一頁) leetcode 預設 的 測試參數 */
    namespace test_case_P1 {
        class TestCase_P1 {
            public:
                /* 第 1 題 */
                // vector<int> first_question_Type_vector(int test=1) {
                //     vector<int> nums;
                //     switch (test) {
                //         case 2: nums = {3, 2, 4}; break;
                //         case 3: nums = {10, 8, 2, 5}; break;
                //         default: nums = {2, 7, 11, 15}; break;
                //     }
                //     return nums;
                // }
                int first_question_Type_target(int test=1) {
                    int target = 0;
                    switch (test) {
                        case 2: target = 6; break;
                        case 3: target = 12; break;
                        default: target = 9; break;
                    }
                    return target;
                }
        };
    }
    namespace difficulty_easy_P1 {

        /* 第 1 題: 兩數相加之目標數值，找兩數字之索引值 */
        class TwoSum_Solution {
            public:
                vector<int> twoSum(vector<int>& nums, int target) {
                    vector<int> result;
                    for (int i = 0; i < nums.size(); i++) {
                        for (int j = i; j < nums.size(); j++) {
                            if (nums[i] + nums[j] == target) {
                                result.push_back(i);
                                result.push_back(j);
                                break;
                            }
                        }
                    }
                    return result;
                }
        };
    }

    /* (註: 第二頁) leetcode 預設 的 測試參數 */
    namespace test_case_P2 {
        class TestCase_P2 {
            public:
                /* 第 58 題 */
                string fithty_question(int test=1) {
                    string s;
                    switch (test) {
                        case 2: s = "   fly me   to   the moon  "; break;
                        case 3: s = "luffy is still joyboy"; break;
                        case 4: s = "C++ Programming language"; break;
                        default: s = "Hello World"; break;
                    }
                    return s;
                }
        };
    }

    /* leetcode 標記為 easy 的題目 */
    namespace difficulty_easy_P2 {

        /* 第 58 題: 找最尾端的單字 */
        class LengthOfLastWord_Solution {
            public:
                int lengthOfLastWord(string s) {
                    int length = 0;

                    for (int i = s.size() - 1; i > -1; i--) {
                        if (s[i] == ' ') {
                            if (length > 0) {
                                break;
                            }
                        }
                        else if (s[i] != ' ') {
                            length++;
                        }
                    }

                    return length;
                }
        };
        // class Solution {
        //     public:
        //         int removeElement(vector<int>& nums, int val) {
        //             // 
        //         }
        // };
    }

}