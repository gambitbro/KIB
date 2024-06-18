#include <stdio.h>

// 전역 공간에 배열 생성
int stack[100];
int tos;    // top of stack, 데이터가 들어갈 위치

void push(int data)
{
    stack[tos] = data;
    tos++;
}

int pop(void)
{
    tos--;
    return stack[tos];
}

int main(void)
{
    push(100);
    push(200);
    push(300);

    printf("1st pop : %d\n", pop());
    printf("2nd pop : %d\n", pop());
    printf("3rd pop : %d\n", pop());

    return 0;
}


