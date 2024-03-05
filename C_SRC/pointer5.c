#include <stdio.h>


int add(int a, int b)
{
	return a + b;
}
	
int substract(int a, int b)
{
	return a - b;
}

int main(void)
{
	int (*fp)(int, int); // 함수 포인터
		
	fp = &add; // 더하기 함수 지정
	int re = (*fp)(4, 3);
	printf("re : %d\n", re);
		
	//fp = &substract; // 빼기 함수 지정
	//re = (*fp)(4, 3); // int 재선언하지않음
	fp = substract;
	re = fp(4, 3);
	printf("re : %d\n", re);

	return 0;
}
