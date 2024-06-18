#ifndef STACK_H
#define STACK_H

typedef struct stack {
    //int *pArr;        
    void *pArr;
    int eleSize;
    int size;
    int tos;
} Stack;

void initStack(Stack *ps, int size, int eleSize); 
void clearStack(Stack *ps);



void push(Stack *ps, const void *pData);        //push 함수는 가리키는 대상을 바꾸지않으니 const를 사용
void pop(Stack *ps, void *pData);


#endif