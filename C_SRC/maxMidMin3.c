#include <stdio.h>

int main(void)
{
	int a, b, c;
	printf("input number :  ");
	scanf("%d %d %d", &a, &b, &c);
	
	int max, mid, min;
	//max mid min ???
	
	if (a > b) {
		max = a;
		min = b;
	} else {
		max = b;
		min = a;
	}
	
	if (c > max) {
		mid = max;
		max = c;		
	} else if (c > min) {
			mid = c;
	} else {
		mid = min;
		min = c;
	}
	
	
	/*두번째
	if (a > b) {
		if (c > a) {
			max = c; mid = a; min = b;
		} else if (c > b) {
			max = a; mid = c; min = b;
		} else {
			max = a; mid = b; min = c;
		}
	} else {
		if (c > b) {
			max = c; mid = b; min = a;
		} else if (c > a) {
			max = b; mid = c; min = a;
		} else {
			max = b; mid = a; min = c;		
		}
	
	}*/
	
	/*첫번째
	if (a > b && a > c && b > c) {
		printf("Max : %d\tMid : %d\tMin : %d\n", a, b, c);
	} else if (a > b && a > c && c > b) {
		printf("Max : %d\tMid : %d\tMin : %d\n", a, c, b);
	} else if (b > c && b > a && a > c) {
		printf("Max : %d\tMid : %d\tMin : %d\n", b, a, c);
	} else if (b > c && b > a && c > a) {
		printf("Max : %d\tMid : %d\tMin : %d\n", b, c, a);
	} else if (c > a && c > b && a > b) {
		printf("Max : %d\tMid : %d\tMin : %d\n", c, a, b);
	} else {
		printf("Max : %d\tMid : %d\tMin : %d\n", c, b, a);
	}*/
	
	printf("max: %d mid: %d min %d\n", max, mid, min);
	return 0;
}
