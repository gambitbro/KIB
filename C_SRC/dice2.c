#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	//int nums[6] = {0};
	int nums[7] = {0};	// 7로만들고 인덱스0을 쓰지않는다
	
	for (int i = 1 ; i <= 1000 ; ++i) {
		int dice = rand() % 6 + 1;
		//nums[dice]= nums[dice] + 1;
		++nums[dice];
	}
	
	for (int i = 0 ; i <= 6 ; ++i) {
		printf("%d --- %d\n", i + 1, nums[i]);
	}

	return 0;
}

