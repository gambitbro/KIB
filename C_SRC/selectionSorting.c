#include <stdio.h>

int main(void)
{
	int nums[10] = {50, 90, 10, 20, 40, 80, 70, 100, 30, 60};		//초기화리스트
	
	// selection sorting
	for (int i = 0 ; i < 10-1 ; ++i) {
		for (int j = i+1 ; j < 10 ; ++j) {
			if (nums[j] < nums[i]) {
				int tmp = nums[i];
				nums[i] = nums[j];
				nums[j] = tmp;
			}
		}
	}
	
	for (int i = 0 ; i < 10 ; ++i) {
		printf("%d\n", nums[i]);
	}
	
	return 0;
}
