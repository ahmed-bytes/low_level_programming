#include "main.h"
#include <stdio.h>

/**
* main - Entry test program
* Return: 0 means success else error
*/

int main(void)
{
	char *str, *s;

	str = malloc(sizeof(char) * 90);
	if (check_string(str) == 1)
	{
		printf("NULL\n");
		return (-1);
	}

	s = "Holberton";

	scanf(" %[^\n]", str);

	catstr(str, s);

	return (0);
}
