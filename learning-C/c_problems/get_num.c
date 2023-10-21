#include "main.h"
#include <stdio.h>

int get_num(char *prompt)
{
	int num;
	if(num < 0)
	{
		printf("Error Whole number!!");
		return (-1);
	}

	else if((c = getchar()) != "/n" && c != EOF)
	{
		return (c);
	}
}
