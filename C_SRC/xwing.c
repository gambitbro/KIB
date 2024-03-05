#include <stdio.h>

int main(void)
{
	for (int i = 1 ; i <= 5 ; ++i) { //i++면 변수(증가하기 전 값)이 더 필요하기때문에
		for (int j = 1 ; j <= 5 ; ++j) {
		/*	if (j == i || j == (6 - i)) {
				printf("*");
			} else {
				printf(" ");
			}*/
			printf( (j == i || j == (6 - i)) ? "*" : " ");
		}
		printf("\n");
	}

	return 0;
}

// (j == i || j == (6 - i)) ? "*" : " "
