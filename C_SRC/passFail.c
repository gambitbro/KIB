#include <stdio.h>

int main(void)
{
	int score;
	//printf("your score :  ");
	printf("input score :  ");
	scanf("%d", &score);
	
	//int result = (60 <= score) && (score <= 100);
	int isPass = score >= 60;
	
	//printf("Pass or Fail : %d\n", result);
	printf("score : %d - pass : %d\n", score, isPass);
	return 0;
}
