/**
 * @file listNode.h
 * @author your name (you@domain.com)
 * @version 0.1
 * @date 2023-01-13
 * 
 * @copyright Copyright (c) 2023
 * 
 * @brief Singal Linked List 單向鏈結串列
 * @details list of data structure
 */

#include <iostream>

using namespace std;


// 單一資料欄位，單向鏈結串列
struct linkedList {
    int value;  // 資料欄位
    linkedList *next;  // 紀錄下一個節點 (若沒有，為空值)
};


// 多欄位資料，單向鏈結串列
// 以學生資料為例子
struct multiData_LinkedList {
    int age;  // 年齡
    char *sex;  // 性別
    char *name;  // 姓名

    
    // 分數: 數學、電腦科學
    float math_score;
    float computer_science;
    
    // 儲存下一個節點
    multiData_LinkedList *next;
};

// source: struct multiData_LinkedList
typedef multiData_LinkedList std_List;


void linkedList_Example();
void printNode(linkedList *current);


// 單向鏈結串列範例 1 (長度指定)
void linkedList_Example() {
    int length, data;
    cout<<"Max Length: ";
    cin>>length;
    cout<<"data: ";
    cin>>data;

    struct linkedList *head = new linkedList;

    head -> value = data;   // 建立 頭節點
    head -> next = NULL;   // 第一個節點結束

    // 建立後續節點
    struct linkedList *current = head;   // 目前指到哪一節點，先指向 head 節點
    for (int i = 0; i < length - 1; i++) {
        cout<<"data: ";
        cin>>data;

        current -> next = new linkedList;   // 建立新節點
        current = current -> next;   // 現在指向的位置

        current -> value = data;   // 指派給新節點 資料欄位
        current -> next = NULL;   // 建立完，結束鏈結串列
    }
    cout<<"-------------------"<<endl;

    cout<<"print linked List"<<endl;
    printNode(head);
}

// 印 單向鏈結串列 (單個欄位)
void printNode(linkedList *current) {
    while (current != NULL) {
        cout<<"data: "<<current -> value<<endl;
        current = current -> next;
    }
    cout<<endl;
}



// 以多欄位為例子
class MultiDataList {

private:
    // 宣告頭節點
    std_List *head;

public:
    // Constructor 建構子、建構函式、建造者
    // 建立節點
    MultiDataList() {
        this->head = NULL;
    }
    // destructor 解構子、解構函式、破壞者
    // 整個鏈結串列，所有節點全部釋放
    ~MultiDataList() {
        std_List *current = this->head;
        while (current) {
            std_List *temp = current;
            current = current->next;
            delete temp;
        }
    }
    
    // 印不定長度 字串
    void printString(char *str);
    // 印不定長度 字串
    void printString(string str);
    // 內部
    void printNode();

    // (外部用)
    // 印不定長度 字串
    static void printString_out(char *str) {
        int i = 0;
        while (str[i] != '\0') {
            cout<<str[i];
            i++;
        }
        cout<<endl;
    }
    // (外部用)
    // 印不定長度 字串
    static void printString_out(string str) {
        int i = 0;
        while (str[i] != '\0') {
            cout<<str[i];
            i++;
        }
        cout<<endl;
    }

    // 取得頭節點
    std_List *get_headNode() {
        if (this->head != NULL) {
            return this->head;
        }
        else {
            return NULL;
        }
    }


    // 從尾端加入
    void addBack(char *name, char *sex, int age, float math_score, float cs_score) {
        std_List *new_node = new std_List;  // 建立新節點
        // 資料欄位
        new_node->name = name;
        new_node->sex = sex;
        new_node->age = age;
        new_node->math_score = math_score;
        new_node->computer_science = cs_score;
        new_node->next = NULL;

        // 當節點為空，新節點當頭節點
        if (this->head == NULL) {
            // cout<<"newNode"<<endl;
            this->head = new_node;
        }

        // 下一節點有東西，順著節點到尾端，添加新節點
        else {
            // cout<<"has next node"<<endl;
            std_List *current = this->head;
            
            // 順著頭節點，直到下一個節點是沒有東西為止
            while (current->next != NULL) {
                current = current->next;
            }
            // 添加新節點
            current->next = new_node;
        }
    }

    // 加到前頭 (在頭節點加蓋，新節點變頭節點)
    void addFront(char *name, char *sex, int age, float math_score, float cs_score) {
        std_List *new_node = new std_List;
        new_node->name = name;
        new_node->sex = sex;
        new_node->age = age;
        new_node->math_score = math_score;
        new_node->computer_science = cs_score;

        // 新節點插到頭節點
        new_node->next = this->head;
        this->head = new_node;
    }

    // 插入節點
    void insert(char *str_data, int age=0, float score=0) {
        string hash_map[] = {"name", "sex", "age", "math", "cs"};

        string option = "";        
        int i = 0;
        while (str_data[i] != '\0') {
            option += str_data[i];
            i++;
        }
        
        // int length = end(hash_map) - begin(hash_map);
        // for (int j = 0; j < length; j++) {
        //     if (option == hash_map[j]) {
        //         cout<<"true"<<endl;
        //         break;
        //     }
        // }

    }

    // 刪除頭節點
    bool deleteFront() {
        // 如果當前的頭節點，不執行
        if (this->head == NULL) {
            return false;
        }

        std_List *temp = this->head;   // 當前的頭節點，暫存起來
        this->head = this->head->next;   // 把頭節點的位址，改成下一個節點，當作頭節點
        
        // 釋放掉 "已經暫存好" 且 "與串列切斷聯繫" 的節點
        delete temp;
        return true;
    }

    // 刪除最後一個節點
    bool deleteBack() {
        if (this->head == NULL) {
            return false;
        }

        // 已經沒有下一個節點，只剩下頭節點
        if (this->head->next == NULL) {
            delete this->head;  // 釋放頭節點
            head = NULL;  // 把它設為 NULL (回到初始狀態)

            return true;
        }

        // 一路順到尾端，再刪除 (釋放記憶體)
        std_List *current = this->head;

        // 只會到尾端的前一個節點 ( node_N-1(data)| node_N-1(next) 的位置 )
        // ex: head(data)| head(next) --> node_1(data)| node_1(next) --> ...
        //     ... --> node_N-1(data)| node_N-1(next) --> node_N(data)| node_N(next) --> NULL
        while (current->next->next != NULL) {
            current = current->next;
        }

        delete current->next;
        current->next = NULL;
        return true;
    }

};

void MultiDataList::printString(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        cout<<str[i];
        i++;
    }
    cout<<endl;
}
void MultiDataList::printString(string str) {
    int i = 0;
    while (str[i] != '\0') {
        cout<<str[i];
        i++;
    }
    cout<<endl;
}


void MultiDataList::printNode() {
    std_List *current = this->head;
    int i = 1;
    
    while (current->next != NULL) {
        cout<<"student "<<i<<":"<<endl;
        cout<<"name: ";
        this->printString(current->name);
        cout<<"sex: ";
        this->printString(current->sex);
        cout<<"age: "<<current->age<<endl;
        cout<<"n: "<<current->age<<endl;
        cout<<"Math score: "<<current->math_score<<endl;
        cout<<"Computer Science (CS) score: "<<current->computer_science<<endl;

        i++;
        current = current->next;
    }
}




// 鏈結串列，雙指標欄位 (for binary tree)
struct doubleNode {
    int integer;

    doubleNode *left;
    doubleNode *right;
};


class DoubleLinkedList {
private:
    doubleNode *node;
public:
    DoubleLinkedList() {
        this->node = NULL;
    }
    // ~DoubleLinkedList() {
        
    // }

};




