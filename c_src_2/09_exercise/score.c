#include <stdio.h>

int main(void)
{
    double kor = 3, eng = 5, mat = 4;
    double credits;
    int res = 0;
    double kscore = 3.8, escore = 4.4, mscore = 3.9;
    double grade;

    //전체 학점 계산
    credits = kor + eng + mat;
    //평점 평균 계산
    grade = (kscore + escore + mscore) / 3.0;

    //전체 학점이 10 이상이고 평점평균이 4.0 보다 크면 1, 아니면 0
    // if(credits > 10 && grade > 4.0){
    //     res = 1;
    // }else{
    //     res = 0;
    // }

    ( (credits >= 10) && (grade > 4.0) )? (res = 1) : (res = 0);
    //res = ( (credits >= 10) && (grade > 4.0) )? 1: 0;
    
    printf("결과 값은 %d입니다.\n", res);

    // res = ( sizeof(short) > sizeof(long) )? 1 : 0;

    // if(res == 1){
    //     printf("short\n");
    // }else{
    //     printf("long\n");
    // }

    int seats = 70;
    int audience = 65;
    double rate;

    rate = 100*((double)audience / (double)seats);

    printf("입장률 : %.1f%%\n", rate);


    return 0;
}