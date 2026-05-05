#ifndef PROB1_H
#define PROB1_H

// 상수 및 구조체 선언
const int MAX_SIZE = 21;

struct CircularQueue {
    char data[MAX_SIZE];
    int  front;
    int  rear;
    int  capacity;
};

// 함수 선언 작성
void initQueue(CircularQueue& q);
bool isEmpty(const CircularQueue& q);
bool isFull(const CircularQueue& q);
int size(const CircularQueue& q);
void enqueue(CircularQueue& q, char c);
char dequeue(CircularQueue& q);
char peek(const CircularQueue& q);
void printQueue(const CircularQueue& q);

// 실행 함수
void Problem3();

#endif
