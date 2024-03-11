#include <stdio.h>
#include <string.h>

int main(void)
{
	char *str1 = "hello, world";
	int len = strlen(str1); 		// 문자열의 첫번째 주소를 주면 길이를 재주는 함수
	
	printf("len : %d\n", len);		// 실제 문자열 개수만 센다. \0는 포함되지않음.
	
	//
	
	char str2[13];
	//char *str2;				// segmentation 오류
	//char str2[12];			// 12개 공간을 할당해놓고 13개 씀, boundary error
	
	strcpy(str2, str1);			// 복사. 앞은 목적지 뒤는 웜홀
	
	printf("str2 : %s\n", str2);
	
	//
	
	
	if (strcmp(str1, str2) == 0){		// 문자열 비교 stringcompare 결과값이 0이면 두개 문자열은 같다.
		printf("str1 and str2 are equal\n");
	} else {
		printf("str1 and str2 are not equal\n");
	}
	return 0;
}
