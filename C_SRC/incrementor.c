#include <stdio.h>

int main(void)
{
	int a, b;
	a = 1;
	//b = ++a;
	b = a++;
	
	printf("a : %d\t b : %d\n", a, b);


	return 0;
}
