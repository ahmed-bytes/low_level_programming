#include "main.h"
/**
 * times_table - Entry Point of the Function
 * desc: prints the 9 times table, starting with 0
 * Return: 0 means ran and exited successfully
 */
void times_table(void)
{
	int columns, rows;

	for (columns = 0; columns <= 10; ++columns)
	{
		for (rows = 0; rows <= 10; ++rows)
		{
			if (rows == 0)
				;
			else if ((columns * rows) < 10)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('0' + rows * columns / 10);
			}
			_putchar('0' + rows * columns % 10);

			if (columns < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
