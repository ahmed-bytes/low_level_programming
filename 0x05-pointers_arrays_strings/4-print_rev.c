#include "main.h"

/**
 * print_rev -  function that prints a string followed by a new line in reverse
 * @s: parameter for the string
 */

void print_rev(char *s)
{
	int increase_count = 0;
	int decrease_count;

	for (; *s != '\0'; )
	{
		increase_count++;
		s++;
	}
	for (decrease_count = increase_count; decrease_count >= 0; --decrease_count)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
