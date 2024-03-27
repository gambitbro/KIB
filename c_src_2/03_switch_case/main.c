#include <stdio.h>

int main(void)
{
    int rank;
    int m = 0;
    printf("input rank :  ");
    scanf("%d", &rank);

    switch (rank)
    {
    case 1:
        m = 300;
        break;
    case 2:
        m = 200;
        break;
    case 3:
        m = 100;
        break;
    default:
        m = 10;
        break;
    }

    printf("%d\n", m);
    return 0;
}