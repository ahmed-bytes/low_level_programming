#include <stdio.h>
/**
 * main- To check if the number is
 * a Palindrome Number
 * Return: 0 successfully
 */

int main(void)
{
	int number, duplicate, rem, result = 0;

	printf("Enter Number: ");
	scanf("%d", &number);

	duplicate = number;
	while (duplicate != 0)
	{
		rem = duplicate % 10;
		result = result * 10 + rem;
		duplicate = duplicate / 10;
	}
	if (result == number)
	{
		printf("%d is a Palindrome Number\n", number);
	}
	else
	{
		printf("%d is not a Palindrome Number\n", number);
	}

	return(0);
}
