#include <stdio.h>
/**
 * main - A function to print numbers in reverse
 */
int main(void)
{
	int arr[] = {34, 56, 54, 32, 67, 89, 90, 32, 21};

	for (int i = 8; i >= 0; i--)
	{
		printf("%d, ", arr[i]);
	}
	putchar('\n');

	return (0);
}
