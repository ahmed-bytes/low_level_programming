#include <stdio.h>
/**
 * Write a Program to find the length of a string
 * without using the function in the C standard lib
 */
int _strlen(char *str);


int main(void)
{
	char string[100] = {'L', 'e', 't', 's', ' ', 'g', 'a', 'm', 'e',};

	int len = _strlen(string);

	printf("%d", len);
	return (0);

}

int _strlen(char *str)
{
	char *ptr = str;
	int length = 0;

	while (*ptr != '\0')
	{
		length++;
		ptr++;
	}
	return (length);
}
