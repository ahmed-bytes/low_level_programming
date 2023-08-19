#include <stdio.h>
/**
 * Write a C program to compute the sum of the first 10 natural numbers.
 */

int main(void)
{
	int sum;
	int total = 0;

	for (sum = 1; sum <= 10; sum++)
	{
		total = total + sum;
	}
	printf("%d\n", total);

	return (0);
}
