#include <stdio.h>

int main(void)
{
	int nums[10] = {50, 90, 10, 20, 40, 80, 70, 100, 30, 60};		//초기화리스트
	
	int sum;
	sum = 0;
	for (int i = 0 ; i < 10 ; ++i) {
		sum = sum + nums[i];			// 누적시켜서 더한다는 의미로, sum += nums[i]; 로 쓰기도한다
	}
	
	printf("sum : %d\n", sum);
	return 0;
}
