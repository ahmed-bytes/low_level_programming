#include <stdio.h>
/**
 * a C program that accepts three integers and finds the maximum of three.
 */

int main (void)
{
	int a, b, c;

	printf("Enter The first number:" );
	scanf("%d", &a);
	printf("Enter The second number:" );
	scanf("%d", &b);
	printf("Enter The third number:" );
	scanf("%d", &c);

	if (a > b && a > c)
	{
		printf("a = %d\n", a);
	}
	else if (b > a && b > c)
	{
		printf("b = %d\n", b);
	}
	else
	{
		printf("c = %d\n", c);
	}
	return (0);
}
