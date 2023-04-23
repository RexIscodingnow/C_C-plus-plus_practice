/**
 * @file dataStructure.cpp
 * @author your name (you@domain.com)
 * @brief 資料結構，學習紀錄
 * @version 0.1
 * @date 2023-01-13
 * 
 * @copyright Copyright (c) 2023
 * @details C++ 資料結構 執行區
 */


#include <iostream>
#include <vector>
#include <cmath>


using namespace std;

// 陣列 by 指標
#include "array/array_ptr.h"
// 陣列 by vector
#include "array/vector_arr.h"
// 鏈結串列
#include "listNode/linked_list.h"
// 堆疊
#include "stack/stack_cpp.h"
// 佇列
#include "queue/queue_cpp.h"


// 學生資料
struct student_data {
    char *name;
    char *sex;
    int age;
    float Math_score;
    float CS_score;
};

void listNode_testCase(void);


// char array 輸出字串
void printStr(char *str);
// char array 輸出字串
void printStr(const char *str);

void printStr(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        cout<<str[i];
        i++;
    }
    cout<<endl;
}

void printStr(const char *str) {
    int i = 0;
    while (str[i] != '\0') {
        cout<<str[i];
        i++;
    }
    cout<<endl;
}
// void printStr(string str) {
//     int i = 0;
//     while (str[i] != '\0') {
//         cout<<str[i];
//         i++;
//     }
//     cout<<endl;
// }


int main(int argc, char const *argv[]) {
    const int size = 5;
    Queue_Cycle<int> queue_circle(size);

    for (int i = 0; i < 5; i++) {
        queue_circle.enqueue(i);
    }

    for (int i = 0; i < size; i++) {
        cout<<queue_circle.dequeue()<<endl;
    }
    
    for (int i = 5; i < 10; i++) {
        queue_circle.enqueue(i);
    }

    for (int i = 0; i < size; i++) {
        cout<<queue_circle.dequeue()<<endl;
    }

    return 0;
}

void listNode_testCase(void) {
    student_data std_data[5];
    
    string std_name[5]= {"Jack", "Amy", "John", "Alexa", "sam"};
    string std_sex[5] = {"male", "female", "male", "female", "male"};
    int std_age[5] = {12, 15, 20, 8, 14};
    float math_score[5] = {85.5, 78.2, 98.3, 68.9, 44.5};
    float CS_score[5] = {65.7, 88.5, 99.2, 65.4, 32.1};

    int i = 0;

    // end( std_data 陣列的最尾端之 記憶體位址 ) - begin( std_data 陣列的開頭之 記憶體位址 )
    // explaination: std_data[5] => 最末端位址  - std_data[0] => 開頭位址 (陣列起始點)
    int length = end(std_data) - begin(std_data);
    while (i < length) {
        // 抓取每一個元素 (字串)，的第一個字元的記憶體位址
        // ex: &std_name[1][0] => "Amy" 的 'A' 的記憶體位址
        std_data[i].name = &std_name[i][0];
        std_data[i].sex = &std_sex[i][0];

        std_data[i].age = std_age[i];
        std_data[i].Math_score = math_score[i];
        std_data[i].CS_score = CS_score[i];
        
        i++;
    }

    // 原先資料
    // i = 0;
    // while (i < length) {
    //     cout<<">>------------<<"<<endl;
    //     cout<<"student "<<i+1<<" data"<<endl;
    //     cout<<"------------"<<endl;
    //     cout<<"name: ";
    //     printStr(std_data[i].name);
    //     cout<<"sex: ";
    //     printStr(std_data[i].sex);
    //     cout<<"age: "<<std_data[i].age<<endl;
    //     cout<<"Math score: "<<std_data[i].Math_score<<endl;
    //     cout<<"CS score: "<<std_data[i].CS_score<<endl;
        
    //     i++;
    // }
}



