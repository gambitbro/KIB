#include <stdio.h>
#include "stack.h"

int main(void)
{
    Stack s1, s2;
    
    initStack(&s1, 10, sizeof(int));        // 시작주소와 데이터 크기를 준다
    initStack(&s2, 100, sizeof(double));

    int i;
    i = 100;
    push(&s1, &i);
    i = 200;
    push(&s1, &i);
    i = 300;
    push(&s1, &i);

    int re;
    pop(&s1, &re);     printf("s1 1st pop : %d\n", re);
    pop(&s1, &re);     printf("s1 2nd pop : %d\n", re);
    pop(&s1, &re);     printf("s1 3rd pop : %d\n", re);


    double d;
    d = 1.1;
    push(&s2, &d);
    d = 2.2;
    push(&s2, &d);
    d = 3.3;
    push(&s2, &d);

    double re2;
    pop(&s2, &re2);     printf("s2 1st pop : %.1f\n", re2);
    pop(&s2, &re2);      printf("s2 2nd pop : %.1f\n", re2);
    pop(&s2, &re2);      printf("s2 3rd pop : %.1f\n", re2);

    clearStack(&s1);
    clearStack(&s2);
    return 0;
}


