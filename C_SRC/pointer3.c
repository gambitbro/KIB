#include <stdio.h>

int main(void)
{
	int a = 0x12345678;
	
	//int *p;
	//p = &a;
	char *p;
	p = (char*)&a; // char타입이라서 '78'만 출력(Little Endian). char를 명시하지않으면, 오류가 난다.

	printf("p : 0x%x\n", *p);
	return 0;
}
