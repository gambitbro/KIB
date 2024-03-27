#include <stdio.h>

int main(void)
{
    // 1부터 10까지의 합_while사용
    int i = 0;
    int sum1 = 0;
    while(i < 10){
        ++i;
        sum1 = sum1 + i;
        //sum += i;
    }

    // 1부터 10까지의 합_for사용
    int sum2 = 0;
    for (int j = 1; j < 11; ++j){
        sum2 = sum2 + j;
        //sum2 += j;
    }

    printf("sum1 : %d\n", sum1);
    printf("sum2 : %d\n", sum2);

    return 0;
}