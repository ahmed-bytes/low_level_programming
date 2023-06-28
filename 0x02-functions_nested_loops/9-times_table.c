#include "main.h"
/**
 * times_table - Entry Point of the Function
 * desc: prints the 9 times table, starting with 0
 * Return: 0 means ran and exited successfully
 */
void times_table(void)
{
	int rows, columns;

	for (columns = 0; columns <= 9; columns++)
	{
		for (rows = 0; rows <= 9; rows++)
		{
			int calculate = columns * rows;

			if (calculate >= 10)
			{
				_putchar('0' + (calculate / 10));
			}

			_putchar('0' + (calculate % 10));

			if (rows != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
