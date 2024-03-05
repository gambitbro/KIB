#include <stdio.h>

int main(void)
{
	int nums[10] = {50, 90, 10, 20, 40, 80, 70, 100, 30, 60};		//초기화리스트
	
	int max;
	max = nums[0]; 		//비교하기위에 50을 max에 넣어줌
	for (int i = 1 ; i < 10 ; ++i) {
		if (max < nums[i]) {
			max = nums[i];
		} else {
			max = max;		//굳이 없어도 됨
		}
	}
	
	printf("max : %d\n", max);
	return 0;
}
