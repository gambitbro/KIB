#include <stdio.h>

int main(void)
{
	int score;
	printf("input score :  ");
	scanf("%d", &score);

	if (score >= 90) {
		printf("your score : %d --- grade : A\n", score);
	} else if (score >= 80 /*&& score < 90*/) {
		printf("your score : %d --- grade : B\n", score);
	} else if (score >= 70) {
		printf("your score : %d --- grade : C\n", score);
	} else if (score >= 60) {
		printf("your score : %d --- grade : D\n", score);
	} else {
		printf("your score : %d --- grade : F\n", score);
	}
	
	return 0;
}
