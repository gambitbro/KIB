#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
//구조체 정의는 헤더파일에서

void push(struct stack *ps, int data)
{
    // full?
    if (ps->tos == ARRAYSIZE){
        fprintf(stderr, "stack is full\n");
        exit(1);
    }

    ps->array[ps->tos] = data;
    ps->tos++;
}

int pop(struct stack *ps)
{
    // empty?
    if (ps->tos == 0){
        fprintf(stderr, "stack is empty\n");
        exit(2);
    }

    ps->tos--;
    return ps->array[ps->tos];
}

void initStack(struct stack *ps)
{
    ps->tos = 0;
}