#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));			//seed // 컴퓨터 내부 시간을 써서 변수를 정함

	for (int i = 1 ; i <= 10 ; ++i) {		//주사위를 10번 던짐
		int dice = rand() % 6 + 1;				//random number 난수
		printf("%d\n", dice);
	}


	return 0;
}
