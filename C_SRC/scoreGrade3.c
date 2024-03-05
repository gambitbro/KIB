#include <stdio.h>

int main(void)
{
	int score;
	printf("input score :  ");
	scanf("%d", &score);

	//	if (score >= 90) {
//		printf("your score : %d --- grade : A\n", score);
//	} else if (score >= 80 /*&& score < 90*/) {
//		printf("your score : %d --- grade : B\n", score);
//	} else if (score >= 70) {
//		printf("your score : %d --- grade : C\n", score);
//	} else if (score >= 60) {
//		printf("your score : %d --- grade : D\n", score);
//	} else {
//		printf("your score : %d --- grade : F\n", score);
//	}
	
	char grade;
	switch (score / 10) {
	case 10:
	case 9:
		grade = 'A';
		break;
	case 8:
		grade = 'B';
		break;
	case 7:
		grade = 'C';
		break;
	case 6:
		grade = 'D';
		break;
	default: // 5, 4, 3, 2, 1, 0
		grade = 'F';
	}
	
	printf("score : %d --- grade : %c\n", score, grade);
	

	
	return 0;
}
