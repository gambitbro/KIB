#include <stdio.h>

int main(void)
{
    char ch;

    printf("문자 입력 :  ");
    scanf("%c", &ch);

    printf("%c의 아스키 코드 값은 %.2f입니다.\n", ch, (double)ch);

    return 0;
}