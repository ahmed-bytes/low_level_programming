#include <stdio.h>
/**
 * main- Entry point of the program that prints the size of various types on the computer it is compiled on
 * Return: If 0 means it exited successfully
 */

int main(void)
{
	int i;
	char c;
	float f;
	long int number
	long long int number1;

	printf("Size of a char: %i byte(s)\n", sizeof(c));
	printf("Size of an int: %i byte(s)\n", sizeof(i));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %i byte(s)\n", sizeof(number1));
	printf("Size of a float: %i byte(s)\n", sizeof(f));
	return (0);
}
