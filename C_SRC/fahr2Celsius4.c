#include <stdio.h>

int main(void)
{
	int fahr;
	int celsius;

	fahr = 100;
	celsius = (fahr - 32) * 1000 * 5 / 9 + 5;

	printf("fahr : %d ---> celsius : %d.%d\n", fahr, celsius / 1000, (celsius - (celsius / 1000 * 1000)) / 10);
	return 0;
}
