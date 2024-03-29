#include <stdio.h>

int main(void)
{
    int age, chest;
    printf("나이를 입력하세요 :  ");
    scanf("%d", &age);
    printf("가슴둘레를 입력하세요 :  ");
    scanf("%d", &chest);

    //int age = 25, chest = 95;

    // if(age < 20){
    //     if(chest >= 95){
    //         printf("사이즈는 L입니다.\n");
    //     }else if(chest >= 85){
    //         printf("사이즈는 M입니다.\n");
    //     }else{
    //         printf("사이즈는 S입니다.\n");
    //     }
    // }else{
    //     if(chest >= 100){
    //         printf("사이즈는 L입니다.\n");
    //     }else if(chest >= 90){
    //         printf("사이즈는 M입니다.\n");
    //     }else{
    //         printf("사이즈는 S입니다.\n");
    //     }

    // }

    char size;

    if(age < 20){
        if(chest >= 95){
            size = 'L';
        }else if(chest >= 85){
            size = 'M';
        }else{
            size = 'S';
        }
    }else{
        if(chest >= 100){
            size = 'L';
        }else if(chest >= 85){
            size = 'M';   
        }else{
            size = 'S';
        }

    }

    printf("사이즈는 %c입니다.\n", size);

    return 0;
}