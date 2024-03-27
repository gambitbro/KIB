#include <stdio.h>

int main(void)
{
    printf("%d\n", 10);
    printf("%05d\n", 10);
    printf("%03d\n", 10);

    printf("%5d\n", 10000);
    printf("%3d\n", 10000);       // 그냥 잘 나온다, 들어오는 값이 3자리보다 커서 그냥 무시함

    printf("%10f\n", 3.45);       // 기본적으로 소숫점 6자리까지 나온다, 10자리까지 출력
    printf("%06.2f\n", 3.45);
    printf("%6.1f\n", 10.46);     // 6은 표시가 안됨, 반올림은 자동으로 된다
    
    printf("%d와 %d의 합은 %d입니다.\n", 10, 20, 30);       //개수 맞춰주기

    printf("0o%o\n", 12);      // 8진수
    printf("0x%02x\n", 12);      // 16진수
    printf("0x%02X\n", 12);      // 16진수

    char ch = 'A';
    char *str = "ABC";
    printf("%c\n", ch);
    printf("%s\n", str);

    return 0;
}