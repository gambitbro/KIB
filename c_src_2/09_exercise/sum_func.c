#include <stdio.h>

void sum_func(int num);
void sum_func2(int num);

int main(void)
{
    sum_func(10);
    sum_func2(6);
    sum_func(100);

    return 0;
}

void sum_func(int num)
{
    int res = 0;
    for(int i = 1; i <= num; ++i){
        res += i;
    }
    printf("1부터 %d까지의 합은 %d입니다.\n", num, res);
}

void sum_func2(int num)
{
    int res=100;
   
    printf(" %d입니다.\n", res);
}