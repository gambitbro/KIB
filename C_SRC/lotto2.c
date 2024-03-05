#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	
	int balls[45];

	for (int i = 0 ; i < 45 ; ++i) {
		balls[i] = i + 1;
	}
	
	//shurffle
	for (int i = 1 ; i <= 1000000 ; ++i) {
		int i = rand() % 45;
		int j = rand() % 45;
		
		int tmp = balls[i];
		balls[i] = balls[j];
		balls[j] = tmp;
	}
	
	for (int i = 0 ; i < 7 ; ++i) {
		printf("%2d ", balls[i]);
	}
	printf("\n");

	return 0;
}
