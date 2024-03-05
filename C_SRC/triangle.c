#include <stdio.h>

int main(void)
{
	int width, height;
	scanf("%d", &width);
	scanf("%d", &height);

	//double area = width * height / 2;  
	double area = 1.0 / 2.0 * width * height;
	
	printf("area : %.1f\n", area);
	
	return 0;
}
