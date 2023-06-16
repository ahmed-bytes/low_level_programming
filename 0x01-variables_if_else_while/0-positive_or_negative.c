#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main- Entry point. The program tells if number is positive,negative or zero
 * Return: 0 which means it exited successfully
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%i is a positive number\n", n);
	}
	else if (n < 0)
	{
		printf("%i is a negative number\n", n);
	}
	else
	{
		printf("%i is zero", n);
	}

	return (0);
}
