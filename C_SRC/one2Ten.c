#include <stdio.h>

int main(void)
{
	int i;
	
	i = 1;
	while (i <= 10) {
		printf("%d\n", i);
		++i;
	}
	//printf("%d\n", i); -> 11이 출력됨

	return 0;
}
