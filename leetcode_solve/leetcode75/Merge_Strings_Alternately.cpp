#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        if (word1.size() == 0) {
            return word2;
        }
        
        else if (word2.size() == 0) {
            return word2;
        }
        
        string res = "";

        // merge string
        int i = 0, j = 0;

        while (i < word1.size() && j < word2.size()) {
            res += word1[i];
            res += word2[j];

            // cout<<word1[i] + word2[j]<<endl;
            i += 1;
            j += 1;
        }
        

        if (i < word1.size()) {
            res.append(word1.substr(i, word1.size()));
        }
        else if (j < word2.size()) {
            res.append(word2.substr(j, word2.size()));
        }

        return res;
    }
};


int main(int argc, char const *argv[]) {
    string word1 = "abc";
    string word2 = "pqrstu";

    Solution solution;
    
    cout<<solution.mergeAlternately(word1, word2)<<endl;

    return 0;
}
