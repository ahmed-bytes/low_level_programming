#include "main.h"
#include <stdio.h>

int get_num(char *prompt)
{
	int num;
	int c;

	while (1)
	{
		printf("%s", prompt);
		if(scanf("%d", &num) == 1)
		{
			while ((c = getchar()) != '\n' && c != EOF);
			return num;
		}
		else
		{
			printf("invalid input\n");
		}
	}
}


int main(void)
{
	int mane;

	mane = get_num("What is the number: ");

	printf("%d", mane);

	return (0);
}
