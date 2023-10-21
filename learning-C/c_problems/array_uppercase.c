#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	char name[10];

	printf("Enter your name: ", name[10]);

	scanf("%c\n", &name[10]);

	printf("%c", toupper(name));

}
