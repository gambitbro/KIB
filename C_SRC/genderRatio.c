#include <stdio.h>

int main(void)
{
	//int man, woman;
	int man, woman;
	//scanf("%d %d", &man, &woman);
	scanf("%d %d", &man, &woman);
	
	//double gender = man + woman;
	//double manRatio = 1.0 * man / (man + woman) * 100;
	//double womanRatio = 1.0 * woman / (man + woman) * 100;
	//or double womanRatio = (0.0 + woman) / (man + woman) * 100;
	//printf("\tMan Ratio = %.1f\n\tWoman Ratio = %.1f\n", man/gender*100, woman/gender*100);
	double manRatio = (double)man / (man + woman) * 100;
	double womanRatio = (double)woman / (man + woman) * 100;
	
	printf("#man : %d\tman Ratio : %.2f%%\n", man, manRatio);
	printf("#woman : %d\twoman Ratio : %.2f%%\n", woman, womanRatio);
	return 0;
}

