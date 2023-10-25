#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* long_word - Finds longest words in a sentence
* @s: Parameter string
*/

void long_word(char *s)
{
	int count = 0, max_len = 0, max_index = 0;

	for (int i = 0; i <= strlen(s); i++)
	{
		if (s[i] == ' ' || s[i] == '\0')
		{
			if (max_len < count)
			{
				max_len = count;
				max_index = i - max_len;
			}
			count = 0;
		}
		else
		{
			count++;
		}
	}
	printf("The Longest word is: ");
	for (int i = max_index; i < (max_index + max_len); i++)
	{
		printf("%c", s[i]);
	}
	printf("\n");

}
