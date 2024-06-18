#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

void push(struct queue *pq, int data)
{
    // full?
    if (pq->rear == 100){
        fprintf(stderr, "queue is full\n");
        exit(1);
    }
    pq->qArr[pq->rear] = data;
    ++pq->rear;
}

int pop(struct queue *pq)
{
    // empty?
    if (pq->front < 0){
        fprintf(stderr, "queue is empty\n");
        exit(2);
    }
    int i = pq->front;
    ++pq->front;
    return pq->qArr[i];    // return 뒤에 front 값이 증가해야 하기 때문에, 임시변수 i를 써서 증가되기 전 front값을 빼낸다.
}

void initQueue(struct queue *pq)
{
    pq->front = 0;
    pq->rear = 0;
}