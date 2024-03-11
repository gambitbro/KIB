#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//char name[21];
	
	//char *name;		// 포인터는 반드시 대상을 가리키고 역참조, 오류난다 
	
	//char buf[21];
	//char *name = buf;
	
	char *name = malloc(sizeof(char) * 21); 	// heap 공간을 씀
	
	scanf("%20s", name);		// scanf("%s", &name[0]); // 마지막엔 아스키코드 0값이 들어가야해서 20개만 받음
	// scanf는 주소값을 입력받아 20개를 채워넣는다
	
	printf("%s\n", name); 		// printf("%s\n", &name[0]); // %s는 주소값을 받아 아스키코드 0 만날때까지 출력

	free(name);
	return 0;
}
