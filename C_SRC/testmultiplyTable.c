#include <stdio.h>

int main(void)
{
  int num ;
  scanf("%d",&num);
  
  for(int i = 1 ; i <= 19 ; ++i){
  	printf("%d  ",i * num);
  }
	
	return 0;
}
