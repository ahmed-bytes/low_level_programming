#include <stdio.h>
/**
 * Testing and understanding different pointers declaration
 */

int main(void)
{
	int z = 90;
	int n;
	int *p;
	int **ppn;
	int ***pppn;
	
	n = 42;
	p = &n;
	ppn = &z;
	pppn = &ppn;
	printf("The address of p = %d == pppn == %d\n", *p, ***pppn);

	return (0);
}
