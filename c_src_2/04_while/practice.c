#include <stdio.h>

int main(void)
{
    // 시작값 입력 -> 10
    // 끝값 입력 -> 20
    // start부터 end까지의 합은 sum1입니다
    
    int start = 0;
    int end = 0;
    printf("시작값을 입력하세요 :  ");
    scanf("%d", &start);
    printf("끝값을 입력하세요 :  ");
    scanf("%d", &end);

    if(start > end){
        int tmp = start;
        start = end;
        end = tmp;
        printf("시작값이 더 크므로 시작값과 끝값을 바꿉니다.\n");
    }

    int i = start;
    int sum1 = 0;
    while(i < (end + 1)){
        sum1 = sum1 + i;
        //sum1 += i;
        ++i;
    }

    printf("%d부터 %d까지의 합은 %d입니다.\n", start, end, sum1);

    return 0;
}