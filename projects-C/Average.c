#include <stdio.h>
/**
 * main- Entry point of this program to calculate the average of numbers
 * desc: A program to calculate the average of multiple numbers entered by the user
 * Return: 0 which indicate the program ran successfully
 */

int main(void)
{

	printf("\t\t\t\t==============================================\n");
	printf("\t\t\t\t\tWELCOME TO AVERAGE MANIA\n");
	printf("\t\t\t\tYou can only enter a maximum of 10 numbers!!!\n");
	printf("\t\t\t\t===============================================\n");

	int sum, size_of_value;
	do
	{
		printf("How many Numbers do you want to calculate: ");
		scanf("%d", &size_of_value);
	}
	while(size_of_value > 10 || size_of_value <= 0);

	int value[size_of_value];

	for (int i = 0; i < size_of_value; i++)
	{
		printf("Enter number: ");
		scanf("%d", &value[i]);
		sum += value[i];

	}

	float total = sum / (float) size_of_value;

	printf("The Average of the numbers is: %.2f\n", total);

	return 0;
}
