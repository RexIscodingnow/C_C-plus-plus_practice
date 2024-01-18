// #include <bits/stdc++.h>

#include <iostream>
#include <cmath>
#include <vector>
#include <unordered_map>

using namespace std;


#include "../dataStructure_C++/array/vector_arr.h"



// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


ListNode* build_list(vector<int> data);
void printNode(ListNode* current);

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

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        /*
            頭節點為個位數 ~ 尾節點最高位數
         */

        int carry = 0;  // 進位
        ListNode *result = new ListNode();
        ListNode *current = result;

        while (l1 != NULL || l2 != NULL || carry != 0) {
            int sum = 0;
            
            if (l1 != NULL) {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2 != NULL) {
                sum += l2->val;
                l2 = l2->next;
            }

            sum += carry;
            carry = sum / 10;

            current->next = new ListNode(sum % 10);
            current = current->next;
        }
        
        return result->next;
    }

    
};

// template<typename T>
// void merge_sort(vector<T> &array, int low, int high) {
//     int mid = array.size() / 2;
//     merge<T>();


// }

// template<typename T>
// void merge(vector<T> )



int main(int argc, char const *argv[]) {

    // foo(f);

    return 0;
}

void printNode(ListNode *current) {
    while (current != NULL) {
        if (current->next == nullptr) {
            cout<<current->val;
            break;
        }

        cout<<current->val<<" -> ";
        current = current->next;
    }
    cout<<endl;
}

ListNode* build_list(vector<int> data) {
    if (data.size() == 0) {
        ListNode* head = new ListNode();
        
        return head;
    }

    ListNode *head = new ListNode(data[0]);
    ListNode *current = head;

    for (int i = 1; i < data.size(); i++) {
        ListNode* new_node = new ListNode(data[i]);

        while (current->next != nullptr) {
            current = current->next;
        }

        current->next = new_node;
    }

    return head;
}




