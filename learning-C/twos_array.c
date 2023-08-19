#include <stdio.h>
/**
 * main - A finction to check if any digit
 * In a number appears more than once
 */
int main(void)
{
	int numbers[10] = {0};//0, 1, 2, 3.... = 0
	int input;

	printf("Enter Number: ");
	scanf("%d", &input);

	int rem;
	while (input > 0)
	{
		rem = input % 10;

		if (numbers[rem] == 1)
			break;
		numbers[rem] = 1;
		input = input / 10;
	}
	if (input > 0)
	{
		printf("Yes\n");
	}
	else
	{
		printf("NO\n");
	}
	return (0);
}
