#include <stdio.h>

int main(void)
{
    for(int j = 1; j < 10; ++j){
        for(int i = 2; i < 10; ++i){
            printf("%d x %d = %d\t", i, j, i*j);
        }
        printf("\n");
    }

    return 0;
}