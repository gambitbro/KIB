#include <stdio.h>

int main(void)
{
//     //점수 저장
//     int score[5];
//     for(int i = 0; i < 5; ++i){
//         printf("성적을 입력하세요 :  ");
//         scanf("%d", &score[i]);
//     }

//     printf("score[0]의 주소 : %p\n", score);
//     printf("score[1]의 주소 : %p\n", score+1);

//     int num = sizeof(score)/sizeof(score[0]);

//     //총합
//     int total = 0;
//     for(int i = 0; i < 5; ++i){
//         total += score[i];
//     }

//     //평균
//     double avg;
//     avg = (double)total / 5.0;

//     //성적 출력
//     for(int i = 0; i < 5; ++i){
//         printf("%d의 성적은 %5d입니다.\n", i + 1, score[i]);
//     }
//     printf("\n");

//     //총합 출력
//     printf("총 합은 %d입니다.\n", total);
//     //평균 출력
//     printf("평균은 %.2lf입니다.\n", avg);

    // char str[] = {'a', 'p', 'p', 'l', 'e', 'j', 'a', 'm'};
    // char str1[80] = "applejam";
    // int num[] = {1, 2, 3, 4, 5};

    // printf("%ld\n", sizeof(str) / sizeof(str[0]));
    // //printf("%ld\n", sizeof(str));
    // printf("%ld\n", sizeof(num) / sizeof(num[0]));

    char str[5];

    str[0] = 'O';
    str[1] = 'K';
    printf("%s\n", str);

    return 0;
}