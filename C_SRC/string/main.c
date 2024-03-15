#include <stdio.h>
#include <string.h>
#include "myString.h"

int main(void)
{
//=================my_strcat=========================
    char str[100];
    char str2[100];

    printf("Hello, World!\n");

    my_strcat(str, "abc");
    printf("%s\n", str);
    
    my_strcat(str, "def");
    printf("%s\n", str);

    //printf("%s\n", strcat(str, "ghi"));

//=================my_strcmp========================

    printf("%d\n", my_strcmp("abcde", "abcfe"));

//=================my_strcpy========================

    my_strcpy(str2, str);
    if (my_strcmp(str, str2)==0) {
        printf("두 스트링 변수는 같다.\n");
    } else {
        printf("두 스트링 변수는 다르다.\n");
    }

//=================my_strlen========================
    my_strlen(str);
    printf("%d\n", my_strlen(str));
    printf("%d\n", my_strlen(str2));

    my_strcat(str, str2);
    printf("%d\n", my_strlen(str));

    return 0;
}