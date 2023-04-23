/**
 * @file queue_cpp.h
 * @author your name (you@domain.com)
 * @version 0.1
 * @date 2023-03-28
 * 
 * @copyright Copyright (c) 2023
 * 
 * @brief Queue ��C ��V�P����
 * @details Queue Operation of C++
 */


#include <iostream>
#include <vector>

using namespace std;


// ��V queue
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

    // ���J
    void enqueue(dtype data) {
        if (this->isFull()) {
            return;
        }
        this->rear++;
        this->queue[this->rear] = data;
    }
    // �X�h
    dtype dequeue() {
        if (this->isEmpty()) {
            return -1;
        }

        dtype temp = this->queue[this->front];
        this->front++;
        return temp;
    }
    
    // ��^�̫e��
    dtype top() {
        return this->queue[0];
    }

    bool isEmpty() {
        return (this->rear < this->front);
    }
    bool isFull() {
        return (this->rear == (this->capacity-1));
    }

    // �s�J�Ӽ�
    int size() {
        return this->rear - this->front;
    }
};


// ���� queue
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

    // ��J queue
    void enqueue(dtype data) {
        if (this->isFull()) {
            return;
        }
        this->rear++;
        this->queue[(this->rear + 1) % this->size] = data;
    }

    // ���X queue
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
        // �s�J�� rear ����m�A��s�����ɭԡA�|�P�R����ƪ� front
        // �|�ۮt�@��Z��
        // �]�N�O���A�s�캡���ɭԡA�|���@�Ӧ�m�O�Ū�
        // ���ӪŦ�N�O front �Ҧb����m
        return (this->rear + 1) == this->front;
        // return (this->rear + 1) % this->size == this->front;
    }
};



