## 2024-06-18 대표님 C언어 자료구조 강의

- 자료구조(**data(변수 and 배열) + 관련된 연산(함수)**)
    pg = data + 명령
    프로그램이 메모리상에 실체화됐다 -> 인스턴스

    1) stack (함수가 실행되는 영역)
        **last-in-first-out**
        함수가 실행되는 메모리를 stack이라 부르는 이유 -> 가장 마지막에 호출된 함수가 가장 먼저 사라지기 때문

    2) queue
        **first-in-first-out**
        
    3) linked list
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
