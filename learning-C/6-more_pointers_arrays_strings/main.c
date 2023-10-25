#include "main.h"
#include <stdio.h>
#include <string.h>

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

	s = "The quick";

	printf("Enter sentence: ");
	scanf(" %[^\n]", str);

	catstr(str, s);
	long_word(str);

	free(str);
	return (0);
}
