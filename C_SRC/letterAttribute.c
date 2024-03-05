#include <stdio.h>
#define BOLD 	(0x01 << 0) // 0000 0001 // 0x01
#define ITALIC 	(0x01 << 1) // 0000 0010 // 0x02
#define SHADOW 	(0x01 << 2) // 0000 0100 // 0x04
#define UL		(0x01 << 3) // 0000 1000 // 0x08

int main(void)
{
	unsigned char attr;
	attr = attr ^ attr; //캐럿, 파이썬에선 제곱, XOR(attr에 0, 비교용도로 씀) // 0000 0000
	attr = attr | BOLD; // 0000 0001 // 매크로상수는 대문자로 쓴다
	attr = attr | (ITALIC + SHADOW); //0000 0111
	attr = attr & ~BOLD; // 0000 0110 // BOLD속성 취소
	
	//printf("attr : %x\n", attr);
	//printf("attr : 0x%08x\n", (int)attr); //16진수 앞에 0x 표기, attr앞에 int를 명시할 수 있다, 8자리를 0으로채운다
	printf("attr : 0x%02x\n", (int)attr); // 16진수(%x)가 8자리 -> 2자리만 나오게
	return 0;
}
