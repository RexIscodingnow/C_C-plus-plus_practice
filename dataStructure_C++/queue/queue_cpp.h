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


// ���� queue: ��ڨϥ� N - 1 ���Ŷ�
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

    // ��J queue
    void enqueue(dtype data) {
        if (this->isFull()) {
            return;
        }

        this->rear++;
        this->rear %= this->size;
        // cout<<this->rear<<endl;
        this->queue[this->rear] = data;
    }

    // ���X queue
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
        // �s�J�� rear ����m�A��s�����ɭԡA�|�P�R����ƪ� front
        // �|�ۮt�@��Z��
        // �]�N�O���A�s�캡���ɭԡA�|���@�Ӧ�m�O�Ū�
        // ���ӪŦ�N�O front �Ҧb����m
        return (this->rear + 1) % this->size == this->front % this->size;
    }
};



// ���� Queue: �ϥΨ� N �ӪŶ� (�հ�)
template<typename T>
class CircularQueue {
private:
    T *queue;
    int size;
    int rear = 0;
    int front = 0;
    int action = 0;   // �ާ@���A�A�[�J���: 1 ; �R�����: 0

public:
    CircularQueue(int size) {
        this->size = size;
        this->queue = new T[size];
    }

    ~CircularQueue() {
        delete[] this->queue;
    }
    
    // �[�J
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



// ���V Queue (Deque)
template<typename T>
class Queue_DoubleEnd {
    // 
};


