#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;      //구조체를 가리키는 포인터
} Node;

int main(void)
{
    Node *ptr;
    ptr = malloc(sizeof(Node));
    ptr->data = 1;
    ptr->next = malloc(sizeof(Node));
    ptr->next->data = 3;
    ptr->next->next->data = 4;
    ptr->next->next->next = NULL;

    Node *p = ptr;
    while(p != NULL){
        printf("%d", p->data);
        p = p->next;
        
    }
    return 0;
}