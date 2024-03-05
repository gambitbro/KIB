#include <stdio.h>

int main(void)
{
	int *p = NULL;
	int a = 100;
	int nums[5] = {0};
	
	p = &a; // pointer는 반드시 대상을 가리켜야한다
	*p = 200;
	
	p = &nums[2]; // pointer는 반드시 대상을 가리켜야한다
	*p = 200;
	
	printf("%d, %d\n", a, nums[2]);
	return 0;
}
