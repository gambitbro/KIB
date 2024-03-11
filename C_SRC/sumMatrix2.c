#include <stdio.h>

int sumMatrix(int (*matrix)[4], int row, int col)
//int sumMatrix(int matrix[][4], int row, int col) // 앞에 matrix[][4]는 포인터다. 배열은 복사안됨.
{
	int sum = 0;
	for (int i = 0 ; i < row ; ++i){
		for (int j = 0 ; j < col ; ++j){
			sum = sum + matrix[i][j];	// *(matrix[i] + j) == *(*(matrix + i) + j); == m[i][j]
			// nums[i] == *(nums + i); 
		}
	}
	return sum;
}


int main(void)
{
	int matrix[3][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};
	
	int sum = sumMatrix(matrix, 3, 4);
	
	printf("sum : %d\n", sum);
	return 0;
}
