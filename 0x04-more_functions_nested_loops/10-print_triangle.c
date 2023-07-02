#include "main.h"
/**
 * print_triangle -  a function that prints a triangle
 * @size: the size of the triangle
 * Return: returns 0 if successful
 */

void print_triangle(int size)
{
	int lines, space, rows;

	if (size > 0)
	{
		lines = 0;

		while (lines < size)
		{
			space = size - 1;
			while (space < line)
			{
				_putchar(' ');
				--space;
			}

			rows = 0;

			while (rows < lines + 1)
			{
				_putchar('#');
				rows++;
			}
			_putchar('\n');
			lines++;
		}
	}
	else
	{
		_putchar('\n');
	}


}
