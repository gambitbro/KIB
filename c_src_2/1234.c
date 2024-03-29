#include <stdio.h>

int main(void)
{
    int num1 = 0;
    int num2 = 0;
    char operator = 0;

    for(;;){

        //입력
        printf("? ");
        scanf("%d %c %d", &num1, &operator, &num2);

        int result = 0;
        //연산
        if(operator == '+'){
            result = num1 + num2;
        }else if(operator == '-'){
            result = num1 - num2;
        }else if(operator == '/'){
            result = num1 / num2;
        }else if(operator == '%'){
            result = num1 % num2;
        }else{
            printf("입력이 잘못됐습니다.\n");
            continue;
        }
        
        //출력
        printf("%d %c %d = %d\n", num1, operator, num2, result);
    }

    return 0;
}