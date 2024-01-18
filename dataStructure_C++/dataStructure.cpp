/**
 * @file dataStructure.cpp
 * @author your name (you@domain.com)
 * @brief ��Ƶ��c�A�ǲ߬���
 * @version 0.1
 * @date 2023-01-13
 * 
 * @copyright Copyright (c) 2023
 * @details C++ ��Ƶ��c �����
 */


#include <iostream>
#include <vector>
#include <cmath>


using namespace std;

// �}�C by ����
#include "array/array_ptr.h"
// �}�C by vector
#include "array/vector_arr.h"
// �쵲��C
#include "listNode/linked_list.h"
// ���|
#include "stack/stack_cpp.h"
// ��C
#include "queue/queue_cpp.h"
// �𪬵��c
#include "tree/binary_tree.h"


// �ǥ͸��
struct student_data {
    char *name;
    char *sex;
    int age;
    float Math_score;
    float CS_score;
};

void listNode_testCase(void);


// char array ��X�r��
void printStr(char *str);
// char array ��X�r��
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

    vector<int> inner(3, 0);
    vector<vector<int>> arr(5, inner);

    print_vector<int>(arr);


    // const int row = 3;
    // const int col = 3;

    // VectorArray<int> arr(row, col);
    // arr.arange(11, false);
    // arr.print();

    // for (int i = 0; i < 5; i++) {
    //     queue_cycle.enqueue(i+1);
    // }

    // cout<<"--------------"<<endl;
    // for (int i = 0; i < 5; i++) {
    //     cout<<queue_cycle.dequeue()<<endl;
    // }

    // CircularQueue<int> circular_queue(5);

    // for (int i =0 ; i < 5; i++) {
    //     circular_queue.add(i+1);
    // }

    // circular_queue.add(988);

    // for (int i = 0; i < 5; i++) {
    //     cout<<circular_queue.del()<<endl;
    // }

    // circular_queue.add(988);
    // cout<<circular_queue.del()<<endl;


    // BinarySearchTree<int> btree;

    // for (int i = 0; i < 10; i++) {
    //     btree.addNode(i);
    // }

    // btree.pre_order();
    

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

    // end( std_data �}�C���̧��ݤ� �O�����} ) - begin( std_data �}�C���}�Y�� �O�����} )
    // explaination: std_data[5] => �̥��ݦ�}  - std_data[0] => �}�Y��} (�}�C�_�l�I)
    int length = end(std_data) - begin(std_data);
    while (i < length) {
        // ����C�@�Ӥ��� (�r��)�A���Ĥ@�Ӧr�����O�����}
        // ex: &std_name[1][0] => "Amy" �� 'A' ���O�����}
        std_data[i].name = &std_name[i][0];
        std_data[i].sex = &std_sex[i][0];

        std_data[i].age = std_age[i];
        std_data[i].Math_score = math_score[i];
        std_data[i].CS_score = CS_score[i];
        
        i++;
    }

    // ������
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



