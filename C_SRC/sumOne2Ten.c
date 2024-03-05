#include <stdio.h>

int main(void)
{
	int i;
	i = 1;
	int sum;
	sum = 0;
	
	while (i <= 10) {
		sum = sum + i; // sum에 0을 주고 증가하는 i값을 더한다
		++i;
	}
	
	printf("sum[1, 10] : %d\n", sum);

	return 0;
}
