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
{
    Node *p = malloc(sizeof(Node));
    p->data = 2;
    p->next = ptr->next;
    ptr->next = p;
}
{
    Node *p = ptr->next->next;      //p가 3노드를 가리킴
    ptr->next->next = p->next;
    free(p);        //3노드 삭제 
}
    
    //노드 삭제
{
    Node *p = ptr;
    while(p){
        Node *tmp = p;
        p = p->next;

        free(tmp);
    }
}

    // 노드 하나씩 프린트
    Node *p = ptr;
    while(p != NULL){
        printf("%d", p->data);
        p = p->next;
    }
    printf("\n");
    return 0;
}