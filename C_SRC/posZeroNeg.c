#include <stdio.h>

int main(void)
{
	int num;
	scanf("%d", &num);
	
	/*
	if (num > 0) {
		printf("%d is a positive num\n", num);
	} else if (num == 0) {
		printf("%d is a zero num\n", num);
	} else { 
		printf("%d is a negative num\n", num);
	}
	*/
	//위 코드가 좀 더 가독성이 좋다. 
	
	printf("%d is a %s num\n", num, (num > 0) ? "positive" : (num == 0) ? "zero" : "negative"); 	
	return 0;
}
