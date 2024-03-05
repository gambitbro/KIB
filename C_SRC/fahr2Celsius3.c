#include <stdio.h>

int main(void)
{
	int fahr;
	int celsius;
	
	fahr = 100;
	celsius = (fahr - 32) * 1000 * 5 / 9 + 5;
	
	int left = celsius / 1000;
	int right = (celsius - (celsius / 1000 * 1000)) / 10;
	
	printf("fahr : %d >>> celsius : %d.%d\n", fahr, left, right);
	return 0;
}
