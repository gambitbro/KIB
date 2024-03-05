#include <stdio.h>

int main(void)
{
	int a = 100;
	double d = 3.14;
	
	void *p;
	
	p = &a;
	*(int*)p = 200; // 가리키는 자료의 타입으로 타입캐스팅하고 역참조해야한다(void포인터의 경우)
	
	p = &d;
	
	


	printf("a : %d\td : %.2f\n", a, d);
	return 0;
}
