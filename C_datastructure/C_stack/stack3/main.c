// 구조체를 인자로 넣기, 포인터 사용(호출 하는 쪽에서 호출 되는 쪽 값을 변경해줘야 할 경우) 

#include <stdio.h>
#include "stack.h"

// struct stack {
//     int array[100];
//     int tos;
// }; 

int main(void)
{
    struct stack s1, s2;
    //struct stack stacks[20];

    //s1, s2 구조체는 지역 변수 tos를 갖기 때문에 initStack함수를 호출하여 0으로 초기화.(전역변수는 자동으로 초기화되니 필요없음)
    initStack(&s1);
    initStack(&s2);
    // s1.tos = 0;
    // s2.tos = 0;

    push(&s1, 100);
    push(&s1, 200);
    push(&s1, 300);

    printf("s1 1st pop : %d\n", pop(&s1));
    printf("s1 2nd pop : %d\n", pop(&s1));
    printf("s1 3rd pop : %d\n", pop(&s1));

    pop(&s1);           // 스택이 비어있으니 프로그램 중단

    push(&s2, 900);
    push(&s2, 800);
    push(&s2, 700);

    printf("s2 1st pop : %d\n", pop(&s2));
    printf("s2 2nd pop : %d\n", pop(&s2));
    printf("s2 3rd pop : %d\n", pop(&s2));
    
    return 0;
}


