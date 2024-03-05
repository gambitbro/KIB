#include <stdio.h>

int main(void)
{
	int korean, english, math;
	
	scanf("%d %d %d", &korean, &english, &math);

	int sum = korean + english + math;
	double average = sum / 3.0;
	
	printf("sum : %d\taverage : %.2f\n", sum, average);
	
	return 0;
}
