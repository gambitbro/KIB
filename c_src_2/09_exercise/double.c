#include <stdio.h>

int main(void)
{
    double num1 = 4.0;
    double num2 = 1.2;

    printf("%.1f + %.1f = %.2f\n", num1, num2, num1+num2);
    printf("%.1f - %.1f = %.2f\n", num1, num2, num1-num2);
    printf("%.1f * %.1f = %.2f\n", num1, num2, num1*num2);
    printf("%.1f / %.1f = %.2f\n", num1, num2, num1/num2);

    return 0;
}