#include <stdio.h>

int main(void)
{
	int year;
	printf("INPUT YEAR :  ");
	scanf("%d", &year);
	 
	int isLeapYear = (year % 4 == 0) && (year % 100 != 0) || year % 400 == 0;
	//int isLeapYear = (year % 400 == 0) || (year % 4 == 0) && (year % 100 != 0);

	printf("INPUT Year : %d\tis a Leap Year? : %d\n", year, isLeapYear);
	return 0;
}
