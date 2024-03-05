#include <stdio.h>

int main(void)
{
	int nums[10] = {50, 90, 10, 20, 40, 30, 70, 100, 80, 60};

	int value;
	printf("input value :  ");
	scanf("%d", &value);
	
	int i;
	
	for (i = 0 ; i < 10 ; ++i) {				//for문 안에서 int =i; 선언 시, for문 안에서만 쓰인다 *주의*
		if (value == nums[i]) {
			//found
			break;
		} /*else {
		 	//not found
		}*/
	}
	
	if (i != 10) {			//아니면 i < 10
		printf("%d is found. index : %d\n", value, i);
	} else {
		printf("%d is not found.\n", value);
	}
	
	return 0;
}
