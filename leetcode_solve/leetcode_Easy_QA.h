#include <iostream>
#include <string>
#include <vector>

using namespace std;


namespace leetcode_P1_P2 {
    /* (��: �Ĥ@��) leetcode �w�] �� ���հѼ� */
    namespace test_case_P1 {
        class TestCase_P1 {
            public:
                /* �� 1 �D */
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

        /* �� 1 �D: ��Ƭۥ[���ؼмƭȡA���Ʀr�����ޭ� */
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

    /* (��: �ĤG��) leetcode �w�] �� ���հѼ� */
    namespace test_case_P2 {
        class TestCase_P2 {
            public:
                /* �� 58 �D */
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

    /* leetcode �аO�� easy ���D�� */
    namespace difficulty_easy_P2 {

        /* �� 58 �D: ��̧��ݪ���r */
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