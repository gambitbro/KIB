#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "queue.h"

void push(Queue *pq, int data)
{
    assert(pq->rear != pq->size);

    pq->qArr[pq->rear] = data;
    ++pq->rear;
}

void pop(Queue *pq, int *qData)
{
    assert(pq->front != pq->rear);
    
    int i = pq->front;
    ++pq->front;
    // return pq->qArr[i];  // 결과값은 매개변수를 통해 빼낸다
    *qData = pq->qArr[i];
}

void initQueue(Queue *pq, int size)
{
    pq->qArr = (int*)malloc(sizeof(int) * size);
    pq->size = size;
    pq->front = 0;
    pq->rear = 0;
}

void clearQueue(Queue *pq)
{
    free(pq->qArr);
}