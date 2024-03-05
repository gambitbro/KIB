#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	int luckynum[7];
	int inputnum[6];
	int right;
	
//	scanf("%d %d %d %d %d %d", &inputnum[0], &inputnum[1], &inputnum[2], &inputnum[3], 
//									&inputnum[4], &inputnum[5]);

	for (int i = 0 ; i < 7 ; ) {
		luckynum[i] = rand() % 45 + 1;
	 	int j;
	 	for (int j = 0 ; j < i ; ++j) {
	 		if (luckynum[i] == luckynum[j]) {
	 			break;
	 		}
	 	}
	 	
	 	if (j == i) {
	 		++i;
		}
	}
	
	for (int i = 0 ; i < 7 ; ++i) {
		printf("%d" , luckynum[i]);
	}
	printf("\n");
	return 0;
}

/*
	luckynum[0] = rand() % 45 + 1;
	do {
	luckynum[1] = rand() % 45 + 1;
	} while (luckynum[1] == luckynum[0]);
	do {
	luckynum[2] = rand() % 45 + 1;
	} while (luckynum[2] == luckynum[1] || luckynum[2] == luckynum[0]);
	do {
	luckynum[3] = rand() % 45 + 1;
	} while (luckynum[3] == luckynum[2] || luckynum[3] == luckynum[1] || luckynum[3] == luckynum[0]);
	do {
	luckynum[4] = rand() % 45 + 1;
	} while (luckynum[4] == luckynum[3] || luckynum[4] == luckynum[2] || luckynum[4] == luckynum[1] ||
		luckynum[4] == luckynum[0]);
	do {
	luckynum[5] = rand() % 45 + 1;
	} while (luckynum[5] == luckynum[4] || luckynum[5] == luckynum[3] || luckynum[5] == luckynum[2] ||
		luckynum[5] == luckynum[1] || luckynum[5] == luckynum[0]);
	do {
	luckynum[6] = rand() % 45 + 1;
	} while (luckynum[6] == luckynum[5] || luckynum[6] == luckynum[4] || luckynum[6] == luckynum[3] ||
		luckynum[6] == luckynum[2] || luckynum[6] == luckynum[1] || luckynum[6] == luckynum[0]);
*/
	
/*	while (right != 6) {
		right = 0;
		
		for (int i = 0 ; i <= 5 ; ++i) {
			for (int j = 0 ; j <= 5 ; ++j) {
				if (luckynum[i] == inputnum[j]) {
					++right;
				}
		
				if (right == 5 && luckynum[6] == inputnum[j]) {
					printf("congraturation! 2nd!\n");
				} else if (right == 5) {
					printf("congraturation! 3rd!\n");
				} else if (right == 4) {
					printf("congraturation! 4th!\n");
				} else if (right == 3) {
					printf("congraturation! 5th!\n");
				} else {
				}	
			
		if (right == 6) {
			break;
		}
	}	
	printf("congraturation! 1st!\n");
*/

