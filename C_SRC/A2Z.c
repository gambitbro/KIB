#include <stdio.h>

int main(void)
{
	//char capital;
	int code;
	//printf("Capital Input :  ");
	//scanf("%c", &capital);
	scanf("%d", &code);
	
	//int result = (65 <= capital && capital <= 90);
	//int isBig = (code >= 65 && code <= 90);
	int isBig = (code >= 'A' && code <= 'Z');
	
	//printf("[A, Z] : %d\n", result);
	printf("%d ---is big : %d\n", code, isBig);
	return 0;
}
