#include <stdio.h>
/**
 * A function that swaps numbers in a variable
 */
void swap(int x, int y);

int main(void)
{
	int a = 11, b = 22;

	printf("Before function call:\n a=%d, b=%d\n", a, b);
	
	swap(a, b);
	
	return (0);
}



void swap(int x, int y)
{
	int z;

	z = y;
	y = x;
	x = z;

	printf("After Function call:\n a=%d, b=%d\n", x, y);

}
