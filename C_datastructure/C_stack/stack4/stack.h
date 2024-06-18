#ifndef STACK_H
#define STACK_H
//#define ARRAYSIZE 100

// heap 메모리 사용해보자
typedef struct stack {
    //int array[ARRAYSIZE];
    int *pArr;                  // 가변 길이의 배열
    int size;
    int tos;
} Stack;

void initStack(Stack *ps, int size);     //malloc 호출
void clearStack(Stack *ps);



void push(Stack *ps, int data);     // function declaration
//int pop(Stack *ps);
void pop(Stack *ps, int *pData);


#endif