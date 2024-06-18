// 전역 공간에 배열 생성
static int stack[100];                       // main 함수가 접근 못하게 static 처리(같은 .c 파일 안의 함수만 사용하는 변수)
static int tos;                             // top of stack, 데이터가 들어갈 위치

void push(int data)     // function definition 함수 정의
{
    stack[tos] = data;
    tos++;
}

int pop(void)
{
    tos--;
    return stack[tos];
}