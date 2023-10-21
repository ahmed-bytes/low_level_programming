#include <stdio.h>

int main()
{
	int prompt, age;
	
	do
	{
		printf("Enter Your age: ");
        	scanf("%d", &age);
	}
	while(age <= 0)

	if (age < 18)
	{
		printf("Uneligible to vote");
	}

	return 0;
}
