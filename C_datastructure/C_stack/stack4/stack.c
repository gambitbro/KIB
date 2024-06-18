#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "stack.h"
//구조체 정의는 헤더파일에서

void push(Stack *ps, int data)
{
    // // full?
    // if (ps->tos == ps->size){
    //     fprintf(stderr, "stack is full\n");
    //     exit(1);
    // }
    assert(ps->tos != ps->size);    //프로그램을 중단시키고 싶을 때 assert함수를 쓴다, 만족하면 계속진행 거짓이면 프로그램 중단.

    ps->pArr[ps->tos] = data;
    ps->tos++;
}

int pop(Stack *ps)
{
//     // empty?
//     if (ps->tos == 0){
//         fprintf(stderr, "stack is empty\n");
//         exit(2);
//     }
    assert(ps->tos != 0);

    ps->tos--;
    return ps->pArr[ps->tos];
}

void initStack(Stack *ps, int size)
{
    ps->pArr = malloc(sizeof(int)*size);        // malloc 호출, 반드시 free 해줘야 함
    ps->size = size;
    ps->tos = 0;
}

//malloc free
void clearStack(Stack *ps) {
    free(ps->pArr);
}