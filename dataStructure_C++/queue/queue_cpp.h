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


// 環狀 queue: 實際使用 N - 1 的空間
template<typename dtype>
class Queue_Cycle {
private:
    int size;
    dtype *queue;
    int rear = 0;
    int front = 0;

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
        this->rear %= this->size;
        // cout<<this->rear<<endl;
        this->queue[this->rear] = data;
    }

    // 拿出 queue
    dtype dequeue() {
        if (this->isEmpty()) {
            return dtype();
        }

        this->front++;
        this->front %= this->size;
        // cout<<this->front<<endl;

        dtype temp = this->queue[this->front];
        this->queue[this->front] = dtype();
        return temp;
    }

    bool isEmpty() {
        return this->front % this->size == this->rear % this->size;
    }

    bool isFull() {
        // 存入資 rear 的位置，到存滿的時候，會與刪掉資料的 front
        // 會相差一格距離
        // 也就是說，存到滿的時候，會有一個位置是空的
        // 那個空位就是 front 所在的位置
        return (this->rear + 1) % this->size == this->front % this->size;
    }
};



// 環狀 Queue: 使用到 N 個空間 (試做)
template<typename T>
class CircularQueue {
private:
    T *queue;
    int size;
    int rear = 0;
    int front = 0;
    int action = 0;   // 操作狀態，加入資料: 1 ; 刪除資料: 0

public:
    CircularQueue(int size) {
        this->size = size;
        this->queue = new T[size];
    }

    ~CircularQueue() {
        delete[] this->queue;
    }
    
    // 加入
    void add(T data) {
        if (this->isFull()) {
            return;
        }

        this->action = 1;

        this->rear++;
        this->rear %= this->size;
        this->queue[this->rear] = data;
    }

    T del() {
        if (this->isEmpty()) {
            return T();
        }

        this->action = 0;

        this->front++;
        this->front %= this->size;
        T temp = this->queue[this->front];
        this->queue[this->front] = T();
        return temp;
    }


    bool isEmpty() {
        return ((this->rear % this->size == this->front % this->size) && this->action == 0);
    }

    bool isFull() {
        return ((this->rear % this->size == this->front % this->size) && this->action == 1);
    }
};



// 雙向 Queue (Deque)
template<typename T>
class Queue_DoubleEnd {
    // 
};


