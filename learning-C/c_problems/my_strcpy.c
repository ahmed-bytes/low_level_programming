#include <stdio.h>
/**
 * Implement a function that copies astring from one location
 * To another
 */
void _strcpy(const char *set_char, char *another_set_char);

int main(void)
{
	char source[] = {'I', ' ', 'a', 'm', ' ', 'a', ' ', 'b', 'o', 'y'};
	char destination[100];
	
	printf("Before Function call:\n");
	printf("%s\n", source);
	printf("%s\n", destination);

	_strcpy(source, destination);

	printf("After Function call:\n");
	printf("%s", source);
	printf("%s", destination);

	return (0);
}

void _strcpy(const char *set_char, char *another_set_char)
{
	while (*set_char != '\0')
	{
		*another_set_char = *set_char;
		set_char++;
		another_set_char++;
	}
	*another_set_char = '\0';
}
