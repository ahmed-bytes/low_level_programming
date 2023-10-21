#include <stdio.h>
/**
 * main: Entry of the program
 * desc:
 * Return- 0 means executed and exited succesfully
 */
void change_number(int *ptr);

int main(void)
{
	int name = 42;

	printf("the value of name : %d\n", name);
	
	change_number(&name);

	printf("The value now is: %d\n", name);
	return (0);
}

void change_number(int *ptr)
{
	*ptr = 242;
}
