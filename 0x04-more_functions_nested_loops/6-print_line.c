#include "main.h"
/**
 * print_line(int n) - A function that prints the numbers, from 0 to 9
 * Return: returns 0 if successful
 */

void print_line(int n)
{
	int num = 0;

	if (n > 0)
	{
		while (num < n)
		{
			_putchar('_');
			num++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}

}
