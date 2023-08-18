/**
 * @file ruu_code.h
 * @version 0.1
 * @date 2023-05-21
 * 
 * @copyright Copyright (c) 2023
 * 
 * @brief Run Code
 */

namespace Easy_Run {
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
};


