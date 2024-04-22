#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if(argc != 3){
        printf("값은 두 개만 넣어주세요 \\(^오^)/\n");
        return -1;
    }
    printf("argc = %d\n", argc);
    printf("argv0 = %s\n", argv[0]);
    printf("argv1 = %s\n", argv[1]);
    printf("argv2 = %s\n", argv[2]);
    printf( "%d + %d = %d\n", atoi(argv[1]), atoi(argv[2]), atoi(argv[1]) + atoi(argv[2]) );



    return 0;
}

