#include <stdio.h>

int main(void)
{
	char ch;
	printf("INPUT CHAR :  ");
	scanf("%c", &ch);
	
	//int isAlphabet = (65 <= ch) && (ch <= 122);
	int isAlphabet = (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
	
	printf("CODE: %d\tis Alphabet? : %d\n", ch, isAlphabet);
	return 0;
}
