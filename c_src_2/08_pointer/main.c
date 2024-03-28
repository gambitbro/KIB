#include <stdio.h>

// int main(void)
// {
//     int a;      //일반 변수 선언
//     int *pa;    //포인터 선언

//     pa = &a;    //포인터에 a의 주소 대입
//     *pa = 10;   //포인터로 변수 a에 10 대입

//     printf("포인터로 a 값 출력 : %d\n", *pa);
//     printf("변수명으로 a 값 출력 : %d\n", a);
//     printf("포인터로 a 값 출력 : %d\n", *(pa+1));
//     printf("포인터로 a 값 출력 : %p\n", pa+1);

//     printf("pa 변수의 사이즈 : %ld\n", sizeof(pa));     //8바이트

//     return 0;
// }

// //함수 선언
// void swap(int *param_a, int *param_b);

// int main(void)
// {
//     int a = 10, b = 20;

//     swap(&a, &b);

//     printf("a : %d, b : %d\n", a, b);
//     return 0;
// }

// //함수 정의
// void swap(int *param_a, int *param_b)
// {
//     int temp = *param_a;
//     *param_a = *param_b;
//     *param_b = temp;

// }




//함수 선언
int* swap(int param_a, int param_b);

int main(void)
{
    int a = 10, b = 20;

    int *pary = swap(a, b);

    a = *(pary);        //pary의 0번지값
    b = *(pary + 1);    // pary의 1번지값

    printf("a : %d, b : %d\n", a, b);
    return 0;
}

//함수 정의
int* swap(int param_a, int param_b)
{
    int temp = param_a;
    param_a = param_b;
    param_b = temp;

    static int ary[2] = {0};      //함수가 끝나면 지역변수로 쓰인것들이 전부 사라지기때문에, 동적할당을 사용한다.
    ary[0] = param_a;
    ary[1] = param_b;

    return ary;
}