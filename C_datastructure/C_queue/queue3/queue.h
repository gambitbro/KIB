#ifndef QUEUE_H
#define QUEUE_H

struct queue {
    int qArr[100];
    int front;
    int rear;
};

void push(struct queue *pq, int data);
int pop(struct queue *pq);
void initQueue(struct queue *pq);


#endif