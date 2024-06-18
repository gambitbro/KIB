#include <stdio.h>

int queue[100];
int rear; // 들어갈 위치
int front; // 빼낼 위치

void push(int data)
{
    queue[rear] = data;
    ++rear;
}

int pop(void)
{
    int i = front;
    ++front;
    return queue[i];    // return 뒤에 front 값이 증가해야 하기 때문에, 임시변수 i를 써서 증가되기 전 front값을 빼낸다.
}


int main(void)
{
    push(100);
    push(200);
    
    printf("1st pop() : %d\n", pop());

    push(300);

    printf("2nd pop() : %d\n", pop());
    printf("3rd pop() : %d\n", pop());
    return 0;
}