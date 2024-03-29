#include <stdio.h>

int main(void)
{
    int hour;
    int min;
    int sec;
    double time = 3.76;

    hour = (int)time;

    double tmp = time - hour;       //0.76
    double tmp_min = 60.0 * tmp; 
    min = (int)tmp_min;

    double tmp2 = tmp_min - min;
    double tmp2_sec = 60.0 * tmp2;
    sec = (int)tmp2_sec;
    

    
    printf("%.2f시간은 %d시간 %d분 %d초입니다.\n", time, hour, min, sec);
 

    return 0;
}