#include <stdio.h>

int main(void)
{
/*
	char AZ;
	AZ = (char)'A';
	
	while ( (int)AZ <= 'Z' ) {
		printf("%c\n", (int)AZ);
		++AZ;
	}
	printf("%c\n", AZ); // Z 다음값
*/

	int i;
	i = 'A';
	
	while (i <= 'Z') {
		printf("%c", i);
		++i;
	}
	
	printf("\n");
	
	return 0;
}
