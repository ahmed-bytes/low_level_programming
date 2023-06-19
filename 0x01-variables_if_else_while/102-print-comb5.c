#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main- Entry point. The program tells if number is positive,negative or zero
 * Return: 0 which means it exited successfully
 */

int main(void)
{
	int n, comb;

	for (n = 0; n <= 98; n++)
	{
		for (comb = n + 1; comb <= 99; comb++)
		{
			if(!(n == 98 && comb == 99))
			{
				putchar(n / 10 + '0');
				putchar(n % 10 + '0');
				putchar(' ');
				putchar(comb / 10 + '0');
				putchar(comb % 10 + '0');
				putchar(',');

				if (n < 98 || comb < 99)
				{
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return(0);
}
