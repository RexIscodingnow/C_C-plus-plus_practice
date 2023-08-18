/**
 * @file linkedList.h
 * @date 2023-04-26
 * @version 0.1
 * 
 * @copyright Copyright (c) 2023
 * 
 * @brief 鏈結串列 for Test Case
 * 
 */

#include <iostream>

using namespace std;


// 節點 (for 單向)
template<typename T>
struct node {
    T data;
    node *next;
};



template<typename T>
class Single_LinkedList {
private:
    node<T> *headNode;

public:
    Single_LinkedList() {
        this->headNode = NULL;
    }

    ~Single_LinkedList() {
        node<T> *current = this->headNode;
        while (current) {
            node<T> *temp = current;
            current = current->next;
            delete temp;
        }
    }

    // 印所有節點
    void print();


    // 取頭節點
    node<T> *headNode() {
        
    }

    // 取最尾端節點 (屁股節點...欸?)
    node<T> *tailNode() {
        
    }


    void addFront(T data);

    /**
     * @brief 
     * 
     * @param data 
     */
    void addBack(T data);

    /**
     * @brief 刪除頭節點
     * 
     * @return true 
     * @return false 
     */
    bool deleteFront();

    /**
     * @brief 刪除做尾端之節點
     * 
     * @return true 
     * @return false 
     */
    bool deleteBack();
};


template<typename T>
bool Single_LinkedList<T>::deleteFront() {
    
}
template<typename T>
bool Single_LinkedList<T>::deleteBack() {
    
}

template<typename T>
void Single_LinkedList<T>::print() {
    node<T> *current = this->head;

    while (current) {
        cout<<current->data<<" -> ";
        current = current->next;
    }
    cout<<endl;
}

