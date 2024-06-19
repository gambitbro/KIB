## 2024-06-18 대표님 C언어 자료구조 강의

- 자료구조(**data(변수 and 배열) + 관련된 연산(함수)**)
    pg = data + 명령
    프로그램이 메모리상에 실체화됐다 -> 인스턴스

    1) stack (함수가 실행되는 영역)
        **last-in-first-out**
        함수가 실행되는 메모리를 stack이라 부르는 이유 -> 가장 마지막에 호출된 함수가 가장 먼저 사라지기 때문

    2) queue
        **first-in-first-out**
        
    3) linked list(연결 리스트)
        vs. 배열
        linked list는 배열에 비해 삽입/삭제가 간단하다. 하지만 데이터를 찾을 때 순차접근을 해야 함.
        배열은 index연산에 강하다. 하지만 삽입/삭제에 overhead가 생긴다.

        윈도우 작업관리자의 프로세스 목록을 관리할 때, linked list를 쓴다.

        struct node *ptr;
        ptr = malloc(sizeof(struct node));
        ptr->data = 1;
        ptr->next = malloc(sizeof(struct node));        //여기부터는 heap, 이전은 stack
        ptr->next->data = 3;
        ptr->next->next = malloc(sizeof(struct node));
        ptr->next->next->data = 4;
        prt->next->next->next = NULL;

        //1과 3사이에 2삽입
        struct node *p = malloc(sizeof(struct node));
        p->data = 2;
        **p->next = ptr->next;**    //포인터 복사
        **ptr->next = p;**

        //3노드 삭제
        p = ptr->next->next;
        ptr->next->next = p->next;  //ptr->next->next->next;
        free(p);

        //각각의 노드 방문
        struct node *p = ptr;
        while(p){                               //p가 NULL이 아니면
            printf("%d", p->data);
            **p = p->next;**
        }


    4) tree
    5) graph


cc -c main.c -> main.o 생성
cc -c stack.c -> stack.o 생성
cc -o test main.o stack.o -> test라는 이름의 실행파일 만들기(main.o, stack.o 사용)

stack.c를 만든 사람이 함수 선언이 들어가있는 stack.h도 제공 >> main.c에 include


- typedef 를 통해 구조체 이름 지정
        typedef struct stack {
            int *pArr;
            int size;
            int tos;

        } Stack;


- Generic Program
    메모리 상에 존재하는 모든 데이터는 -> (시작주소, size) 만 알면 다 다룰 수 있다.
    <string.h>
        memset()
        memcpy()
        memcmp()

    int a, b
    a = 0;
        memset(&a, 0, sizeof(int));
    b = a;
        memcpy(&b, &a, sizeof(int));
    a == b;
        memcmp(&b, &a, sizeof(int)); //0이면 같다.


    **queue sort 함수**


