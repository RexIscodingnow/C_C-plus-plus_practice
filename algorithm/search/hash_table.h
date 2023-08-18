/**
 * @file hash_table.h
 * @version 0.1
 * @date 2023-04-26
 * 
 * @copyright Copyright (c) 2023
 * 
 * @brief 雜湊表 Hash Table
 * @details 簡易版雜湊函數 (Hash Function) + 雜湊表 (Hash Table)
 */

#include <iostream>
#include <cstdlib>  // 採用於亂數
#include <string>
#include <vector>
#include <ctime>  // 採用於亂數種使用

using namespace std;



class HashTable {
private:
    vector<vector<string>> buckets;
    const int constant = 10;
    const int slot = 2;
    int stored_size = 0;
    int size;


    int hashing(string value) {
        int i = 0;
        int hash_value = 0;

        while (i < value.size()) {
            hash_value += ((int) value[i] + constant);
            i++;
        }
        
        hash_value %= size;
        
        return hash_value;
    }

public:
    HashTable(int size) {
        this->size = size;

        for (int i = 0; i < this->size; i++) {
            vector<string> container;
            this->buckets.push_back(container);
        }
    }

    void insert(string value) {
        if (this->stored_size == (this->buckets.size() * this->slot)) {
            cout<<"hash Table is Full !"<<endl;
            return;
        }

        int index = this->hashing(value);
        // cout<<"index: "<<index<<endl;

        if (!this->buckets[index].empty()) {
            bool collsion = false;

            string temp = value;
            temp += "1";
            int new_index = this->hashing(temp);

            while (this->buckets[new_index].size() >= this->slot) {
                if (new_index == index) {   // 繞一圈
                    collsion = true;
                    break;
                }
                temp += "1";
                new_index = this->hashing(temp);
            }
            
            if (!collsion) {
                this->buckets[new_index].push_back(value);
                this->stored_size++;
            } else {
                cout<<"collision"<<endl;
            }
        }

        else {
            this->buckets[index].push_back(value);
            this->stored_size++;
        }
    }


    // string search(string value) {
        
    // }


    // 檢視所有 buckets
    void view_buckets(int cut_line = 0) {
        // for (int i = 0; i < this->buckets.size(); i++) {
        //     cout<<"[";
        //     for (int j = 0; j < this->buckets[i].size(); j++) {
        //         cout<<this->buckets[i][j]<<", ";
        //     }
        //     cout<<"]"<<endl;

        //     if (i % 10 == 9) {
        //         cout<<"<--------------------> ("<<i+1<<" *10)"<<endl;
        //     }
        // }    
        print_vector<string>(this->buckets, cut_line);
    }

};





