#include <stdio.h>

int main(void)
{
	int a, b, c;
	printf("input number :  ");
	scanf("%d %d %d", &a, &b, &c);
	
	if (a > b) {
		if (c > a) {
			printf("max : %d mid : %d min : %d\n", c, a, b);
		} else if (c > b) {
			printf("max : %d mid : %d min : %d\n", a, c, b);
		} else {
			printf("max : %d mid : %d min : %d\n", a, b, c);
		}
	} else {
		if (c > b) {
			printf("max : %d mid : %d min : %d\n", c, b, a);
		} else if (c > a) {
			printf("max : %d mid : %d min : %d\n", b, c, a);	
		} else {
			printf("max : %d mid : %d min : %d\n", b, a, c);
		}
	}
	
	/*if (a > b && a > c && b > c) {
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

	return 0;
	
}
