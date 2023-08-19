#include <stdio.h>
/**
 * Write a program in C to display 
 * the multiplication table for a given integer.
 */

int main(void)
{
	int num, product;

	printf("Enter The number: ");
	scanf("%d", &num);

	for (int i = 0; i <= 10; i++)
	{
		printf("%d x %d = %d\n", i, num, i * num);
	}
	return (0);
}
