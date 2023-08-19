#include <stdio.h>

int main(void)
{
	int start, end;

	do
	{
		printf("Enter The number to start from: ");
		scanf("%d", &start);

		printf("Enter The number to end at: ");
		scanf("%d", &end);

	}
	while ( (start <= 0) || (end <= 0) );

	while (start <= end)
	{
		if ( (start % 5 == 0) && (start % 3 == 0) )
                {
                        printf("FizzBuzz\n");
                }
		else if (start % 5 == 0)
		{
			printf("Buzz\n");
		}
		else if (start % 3 == 0)
                {
                        printf("Fizz\n");
                }
		else
		{
			printf("%d\n", start);
		}

		start++;

	}
	
	return 0;
}
