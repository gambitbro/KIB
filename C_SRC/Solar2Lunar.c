#include <stdio.h>

int Solar2Lunar(int solaryear, int solarmonth, int solarday)
{
	int lunaryear, lunarmonth, lunarday;
	int solaryear, solarmonth, solarday;

	lunaryear = (solaryear - 4) % 60 + 36;
	lunarmonth = (solarmonth + 9) % 12 + 1;
	lunarday = solarday;

	int lunars[3];
	int lunars[0] = lunaryear;
	int lunars[1] = lunarmonth;
	int lunars[2] = lunarday;

	int = *p;
	p = lunars;
		
	return *p;
}

int main(void)
{
	int solaryear, solarmonth, solarday;
	printf("Input Year month day : ");
	scanf("%d %d %d", &solaryear, &solarmonth, &solarday);
	
	int lunars[3];
	int = *p;
	p = lunars;
	
	printf("Lunar Year is %d-%d-%d\n", *p[0], *p[1], *p[2]);
	return 0;
}
