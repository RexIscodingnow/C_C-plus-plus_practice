/**
 * @file linkedList.h
 * @date 2023-04-26
 * @version 0.1
 * 
 * @copyright Copyright (c) 2023
 * 
 * @brief �쵲��C for Test Case
 * 
 */

#include <iostream>

using namespace std;


// �`�I (for ��V)
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

    // �L�Ҧ��`�I
    void print();


    // ���Y�`�I
    node<T> *headNode() {
        
    }

    // ���̧��ݸ`�I (���Ѹ`�I...��?)
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
     * @brief �R���Y�`�I
     * 
     * @return true 
     * @return false 
     */
    bool deleteFront();

    /**
     * @brief �R�������ݤ��`�I
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

