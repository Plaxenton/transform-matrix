#include<stdio.h>

int main(void)
{
	int matrix[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
	for (int line = 0; line < 3; line++)
	{
		for (int column = 0; column < 3; column++)
		{
			printf("%d ", matrix[line][column]);
		}
		printf("\n");
	}
	for (int line = 0; line < 3; line++)
	{
		for (int column = 0; column < line; column++)
		{
			int temp = matrix[line][column];
			matrix[line][column] = matrix[column][line];
			matrix[column][line] = temp;
		}
	}
	printf("\n");
	for (int line = 0; line < 3; line++)
	{
		for (int column = 0; column < 3; column++)
		{
			printf("%d ", matrix[line][column]);
		}
		printf("\n");
	}
	return 0;
}