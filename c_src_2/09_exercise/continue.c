#include <stdio.h>

int main(void)
{
    int i = 0;
    int sum = 0;
    while(i <= 100){
        if( (i % 3) == 0 || (i % 7) == 0 ){
            sum += i;
            ++i;
            continue;
        }
        ++i;
    }

    printf("%d\n", sum);

    return 0;
}