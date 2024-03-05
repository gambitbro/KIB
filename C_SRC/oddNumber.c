#include <stdio.h>

int main(void)
{
	int num;
	printf("GIVE ME A NUMBER :  ");
	scanf("%d", &num);
	
	int oddnum = num % 2 == 1;

	printf("IS IT ODD? : %d\n", oddnum);
	return 0;
}
