#include <stdio.h>

int sumArray(const int *pArr, int size)			// const : read only
//int sumArray(int pArr[], int size)		// pArr[] -> pointer
//int sumArray(int pArr[10], int size) 	// pArr[10] -> pointer
{	
	int sum;
	sum = 0;
	
	for (int i = 0 ; i < size ; ++i) {
		sum = sum + pArr[i];		// *(pArr + i);
	}
	
	return sum;
}

int main(void)
{
	int nums[10] = {50, 90, 10, 20, 40, 80, 70, 100, 30, 60};		//초기화리스트

	int sum = sumArray(nums, 10);		// int sum = sumArray(&nums[0], 10);
	//int sum = sumArray(nums + 5, 5);
	
	printf("sum : %d\n", sum);
	return 0;
}
