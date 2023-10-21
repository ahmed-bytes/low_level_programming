#include <stdio.h>

int main(void)
{
	int age = 37;

	printf("The address of age: %p\n", &age);

	int *address = &age;

	printf("The pointer of address: %u\n", *address);

	int age1;
	int *address1 = &age1;
	*address1 = 37;
	printf("%u", *address1);

	return 0;
}
