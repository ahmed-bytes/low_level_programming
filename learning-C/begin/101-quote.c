#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point of this program
 * Return: 1 Which means every error should be displayed on the std output
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
