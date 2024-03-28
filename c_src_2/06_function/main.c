#include <stdio.h>

void star_display(int row_arg, int col_arg);

int main(void)
{
    int row = 3, col = 5;
    
    star_display(row, col);     //함수 호출
    
    return 0;
}

//함수 정의
void star_display(int row_arg, int col_arg)
{
    for(int i = 0; i < row_arg ; ++i){
        for(int j = 0; j < (col_arg - i); ++j){
            printf("* ");
        }
        printf("\n");
    }
}