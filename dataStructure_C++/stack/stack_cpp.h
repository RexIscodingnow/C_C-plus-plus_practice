/**
 * @file stack_cpp.h
 * @author your name (you@domain.com)
 * @version 0.1
 * @date 2023-03-27
 * 
 * @copyright Copyright (c) 2023
 * 
 * @brief Stack 堆疊實作 
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

    // 全部清空 + 釋放記憶體 (DeStructor)
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

    // 推入(壓入) 資料
    void push(dtype data) {
        if (!this->isFull()) {
            this->index++;
            this->stack[index] = data;
        }
    }

    // 彈出資料
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

    // 回傳頂部 (不彈出)
    dtype top() {
        if (this->isEmpty()) {
            return dtype();
        }
        else {
            return this->stack[index];
        }
    }

    // 檢查是否為空
    bool isEmpty(void) {
        // if (this->index == -1) {
        //     return true;
        // } else {
        //     return false;
        // }
        return (this->index == -1);
    }

    // 檢查是否放滿
    bool isFull(void) {
        // if (this->index == (length-1)) {
        //     return true;
        // } else {
        //     return false;
        // }
        return (this->index == (length-1));
    }

    // 回傳當前存入(壓入) stack 的個數
    int size() {
        return this->index + 1;
    }
};



