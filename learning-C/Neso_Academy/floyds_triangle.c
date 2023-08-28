#include <stdio.h>
/**
* Main - Write a Program that prints natural numbers
* in floyds triangle
* Return: 0 means exited successfully
*/

int main(void)
{
	int row, column, count;

	printf("Enter rows: ");
	scanf("%d", &row);

	count = 1;

	for(int i = 1; i <= row; i++)
	{
		for(int j = 1; j <= i; j++)
		{
			printf("%d ", count);
			count++;
		}
		printf("\n");
	}
} 
