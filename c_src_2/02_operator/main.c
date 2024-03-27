#include <stdio.h>

int main(void)
{
    int a=5;
    int b=5;
    int pre, post;

    pre = (++a) * 3;
        //a = a + 1;
        //pre = a * 3
    post = (b++) * 3;
        //post = b * 3;
        //b = b + 1;

    printf("pre : %d\n", pre);
    printf("post : %d\n", post);
    printf("a : %d\n", a);
    printf("b : %d\n", b);

    //for문에서의 증감연산자
    for(int i=0; i<5; i++){
        printf("i : %d\n", i);
    }

    for(int j=0; j<5; ++j){
        printf("j : %d\n", j);
    }

    printf("%d\n", (int)10.2);
    printf("%d\n", (int)10.7);

    return 0;
}