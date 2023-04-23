/**
 * @file queue_cpp.h
 * @author your name (you@domain.com)
 * @version 0.1
 * @date 2023-03-28
 * 
 * @copyright Copyright (c) 2023
 * 
 * @brief Queue 佇列 單向與環狀
 * @details Queue Operation of C++
 */


#include <iostream>
#include <vector>

using namespace std;


// 單向 queue
template<typename dtype>
class Queue_Operate {

private:
    dtype *queue;
    int front = 0;
    int rear = -1;
    int capacity;

public:
    Queue_Operate(int size) {
        this->queue = new int[size];
        this->capacity = size;
    }

    ~Queue_Operate() {
        delete[] this->queue;
    }

    // 推入
    void enqueue(dtype data) {
        if (this->isFull()) {
            return;
        }
        this->rear++;
        this->queue[this->rear] = data;
    }
    // 出去
    dtype dequeue() {
        if (this->isEmpty()) {
            return -1;
        }

        dtype temp = this->queue[this->front];
        this->front++;
        return temp;
    }
    
    // 返回最前面
    dtype top() {
        return this->queue[0];
    }

    bool isEmpty() {
        return (this->rear < this->front);
    }
    bool isFull() {
        return (this->rear == (this->capacity-1));
    }

    // 存入個數
    int size() {
        return this->rear - this->front;
    }
};


// 環狀 queue
template<typename dtype>
class Queue_Cycle {
private:
    int size;
    dtype *queue;
    int rear = -1;
    int front = -1;

public:
    Queue_Cycle(int size) {
        this->size = size;
        this->queue = new dtype[this->size];
    }

    ~Queue_Cycle() {
        delete[] this->queue;
    }

    // 放入 queue
    void enqueue(dtype data) {
        if (this->isFull()) {
            return;
        }
        this->rear++;
        this->queue[(this->rear + 1) % this->size] = data;
    }

    // 拿出 queue
    dtype dequeue() {
        if (this->isEmpty()) {
            return dtype();
        }

        this->front++;
        dtype temp = this->queue[(this->front + 1) % this->size];
        return temp;
    }

    bool isEmpty() {
        return this->front == this->rear;
    }

    bool isFull() {
        // 存入資 rear 的位置，到存滿的時候，會與刪掉資料的 front
        // 會相差一格距離
        // 也就是說，存到滿的時候，會有一個位置是空的
        // 那個空位就是 front 所在的位置
        return (this->rear + 1) == this->front;
        // return (this->rear + 1) % this->size == this->front;
    }
};



