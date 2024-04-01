#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char quest[30] = {'\n'};     //문자열 변수 선언
    printf("? ");
    scanf("%[^\n]s", quest);
    //gets(quest);        //문자열 입력(엔터 입력까지)

    int num1, num2;
    char op;
    int op_pos;
    char num1_str[10] = {'\n'};
    char num2_str[10] = {'\n'};

    //연산자의 위치 출력 및 op에 저장
    for(int i = 0; i < sizeof(quest)/sizeof(quest[0]); ++i){
        if(quest[i] == '\0'){
            break;
        }
        
        if(quest[i] == '+' || quest[i] == '-' || quest[i] == '/' || quest[i] == '*' || quest[i] == '%'){
            //printf("%d\n", i);
            op = quest[i];
            op_pos = i;
            
            break;
        }
    }
    
    //  피연산자를 숫자로 바꾸어서 저장
    //  num1 -> 0 ~ i-2 , num2 -> i+2 ~ '\0'
    for(int i = 0; i < op_pos - 1; ++i){
        num1_str[i] = quest[i];
    }
    num2_str[op_pos - 1] = '\0';
    num1 = atoi(num1_str);

    for(int i = op_pos + 2; i < 30; ++i){
        if(quest[i] == '\0'){
            num2_str[i] = '\0';
            break;
        }
        num2_str[i-(op_pos + 2)] = quest[i];
    }
    num2 = atoi(num2_str);

    double result = 0;
        
    if(op == '+'){
        result = num1 + num2;
    }else if(op == '-'){
        result = num1 - num2;
    }else if(op == '/'){
        result = (double)num1 / (double)num2;
    }else if(op == '%'){
        result = num1 % num2;
    }else{
        printf("입력이 잘못됐습니다.\n");
    }

    //출력
    printf("%d %c %d = %.2f\n", num1, op, num2, result);
 
    return 0;
}