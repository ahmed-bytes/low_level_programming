#include <stdio.h>

/**
 * Write a program in C to display n terms of natural numbers and their sum.
 */

int main(void)
{
	int num;

	printf("Enter number: ");
	scanf("%d", &num);

	int total = 0;

	printf("The  First %d Natural numbers are: ", num);
	for (int i = 0; i <= num; i++)
	{
		printf("%d, ", i);
		total = total + i;
	}
	printf("\n");
	printf("%d\n", total);

	return (0);
}
