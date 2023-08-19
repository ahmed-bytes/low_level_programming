#include <stdio.h>

void strings_fun(void);

int main(void)
{
	int price[5] = {1, 2, 3, 4, 5};
	
	for (int i = 0; i < 5; i++)
	{
		printf("%d : %d\n", i, price[i]);
	}
	printf("\n");

	strings_fun();

	return (0);
}

	

















	void strings_fun(void)
	{
		char arr[12] = {'H', 'E', 'L', 'L', 'O', '-', 'T', 'H', 'R' ,'E', 'A', 'D'};

		for (int i = 0; i < 12; i++)
		{

			printf("%d : %c\n", i, arr[i]);
		}

		printf("\n");
	}
