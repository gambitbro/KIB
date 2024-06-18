#ifndef STACK_H
#define STACK_H
#define ARRAYSIZE 100

// 내가 원하는 변수, 배열을 찍어내고 싶을 때 구조체를 쓴다
// 구조체 정의는 헤더파일에서
struct stack {
    int array[ARRAYSIZE];
    int tos;
};

void push(struct stack *ps, int data);     // function declaration
int pop(struct stack *ps);
void initStack(struct stack *ps);

#endif