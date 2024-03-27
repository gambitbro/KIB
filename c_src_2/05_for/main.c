#include <stdio.h>

int main(void)
{
    // 1부터 10까지의 합_for사용
    int start = 1;
    int end  = 10;
    int sum = 0;
    
    for (int i = start; i < (end + 1); ++i){
        sum = sum + i;
        //sum += i;
        printf("%d ", i);
    }
    printf("\n");

    printf("sum => %d\n", sum);

    // 중첩 for문
    for(int i = 0; i < 5; ++i){
        for(int j = 0; j < 5; ++j){
            if( ((i == 0) && (j > 3)) || ((i == 1) && (j >= 3)) || ((i == 2) && (j >= 2)) || (i == 3 && j >= 1) || (i == 4)){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}