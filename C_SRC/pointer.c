#include <stdio.h>

int main(void)
{
	int a;
	int *p;
	
	a = 100;
	p = &a; // pointer로 a를 지정
	*p  = 200;


	printf("%d\n", a);
	return 0;
}
