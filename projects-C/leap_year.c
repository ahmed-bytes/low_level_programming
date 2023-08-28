#include <stdio.h>
/**
 * main- Write a Program that check if a year is a leap year
 * Return: 0 means Ran and exited successfully
 */

int main(void)
{
	int year_input;

	printf("Enter Year: ");
	scanf("%d", &year_input);

	if (year_input % 400 == 0)
	{
		printf("%d is a leap year\n", year_input);
	}
	else if (year_input % 4 == 0)
	{
		printf("%d is a leap year\n", year_input);
	}
	else
	{
		printf("%d is not a leap year\n", year_input);
	}

	return(0);
}
