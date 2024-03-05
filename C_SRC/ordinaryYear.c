#include <stdio.h>

int main(void)
{
	int year;
	printf("INPUT YEAR :  ");
	scanf("%d", &year);
	 
	//int isOrdinaryYear = !((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0));
	int isOrdinaryYear = year % 4 != 0 || year % 100 == 0 && year % 400 != 0;
	
	printf("INPUT Year : %d\tis a Ordinary Year? : %d\n", year, isOrdinaryYear);
	return 0;
}
