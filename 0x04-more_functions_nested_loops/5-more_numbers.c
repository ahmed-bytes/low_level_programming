#include "main.h"
/**
 * more_numbers - A function that prints the numbers, from 0 to 9
 * Return: returns 0 if successful
 */

void more_numbers(void)
{
	int num = 0;

	while (num <= 10)
	{
		while (num <= 14)
		{
			_putchar('0' + num);
			num++
		}
		_putchar('\n');
		num++;
	}
	_putchar('\n');

}
