#include <bits/stdc++.h>

using namespace std;


#include "../dataStructure_C++/array/vector_arr.h"


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> window;
        int max_length = 0;
        int start = 0;

        for (int i = 0; i < s.length(); i++) {
            if (window.count(s[i])) {
                start = max(start, window[s[i]] + 1);
            }

            max_length = max((i - start) + 1, max_length);
            window[s[i]] = i;
        }

        return max_length;
    }

    string reverseVowels(string s) {
        vector<char> vowels;

        for (int i = 0; i < s.length(); i++) {
            if (
                s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
                s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'
            ) {
                vowels.emplace_back(s[i]);
            }
        }
        
        int j = 0;
        int k = vowels.size() - 1;

        while (j < s.length()) {
            if (
                s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u' ||
                s[j] == 'A' || s[j] == 'E' || s[j] == 'I' || s[j] == 'O' || s[j] == 'U'
            ) {
                s[j] = vowels[k];
                k--;
            }
            
            j++;
        }

        return s;
    }
};


int main(int argc, char const *argv[]) {

    Solution run;

    string s = "leetcode";
    // int res = run.lengthOfLongestSubstring(s);

    string res = run.reverseVowels(s);
    cout<<res;
    

    return 0;
}





