#include <stdio.h>
/**
 * main - Entry Point of this program
 * Desc: Print all the numbers of base 16
 * Return: 0 means exited successfully
 */

int main(void)
{
	int number = '0';

	while (number < '16')
	{
		if (number < 10)
		{
			putchar(number);
		}
		number++;
	}
	putchar('\n');

	return (0);
}
