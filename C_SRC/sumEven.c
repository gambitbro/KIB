#include <stdio.h>

int main(void)
{
	int i;
	i = 2;
	int sum;
	sum = 0;
	
	while (i <= 100) {
		sum = sum + i;
		i = i + 2;
	}
	
	printf("sum even num [2, 100] : %d\n", sum);
	return 0;
}
