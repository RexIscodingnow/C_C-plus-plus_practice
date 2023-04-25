/**
 * @file stack_cpp.h
 * @author your name (you@domain.com)
 * @version 0.1
 * @date 2023-03-27
 * 
 * @copyright Copyright (c) 2023
 * 
 * @brief Stack ���|��@ 
 * @details Stack Operation of C++
 */


#include <iostream>
#include <vector>

using namespace std;


template<typename dtype>
class Stack_Operator {

private:
    int index = -1;
    int length;
    dtype *stack;

public:
    Stack_Operator(int length) {
        this->length = length;
        this->stack = new dtype[length];
    }

    // �����M�� + ����O���� (DeStructor)
    ~Stack_Operator() {
        if (this->isEmpty()) {
            return;
        } else {
            while (!this->isEmpty()) {
                this->pop();
            }
            delete[] this->stack;
        }
    }

    // ���J(���J) ���
    void push(dtype data) {
        if (!this->isFull()) {
            this->index++;
            this->stack[index] = data;
        }
    }

    // �u�X���
    dtype pop() {
        if (!this->isEmpty()) {
            dtype temp = this->stack[index];
            this->stack[index] = dtype();
            index--;

            return temp;
        }
        else {
            cout<<">>> Is Empty <<<"<<endl;
            return dtype();
        }
    }

    // �^�ǳ��� (���u�X)
    dtype top() {
        if (this->isEmpty()) {
            return dtype();
        }
        else {
            return this->stack[index];
        }
    }

    // �ˬd�O�_����
    bool isEmpty(void) {
        // if (this->index == -1) {
        //     return true;
        // } else {
        //     return false;
        // }
        return (this->index == -1);
    }

    // �ˬd�O�_��
    bool isFull(void) {
        // if (this->index == (length-1)) {
        //     return true;
        // } else {
        //     return false;
        // }
        return (this->index == (length-1));
    }

    // �^�Ƿ�e�s�J(���J) stack ���Ӽ�
    int size() {
        return this->index + 1;
    }
};



