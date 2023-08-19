#include <stdio.h>
int add(int num1, int num2);

int main(void)
{
	int number1, number2;

	printf("Enter the first number to be added: ");
	scanf("%i", &number1);

	printf("Enter the first number to be added: ");
        scanf("%i", &number2);
	
	int Calculation;


	Calculation = add(number1, number2);

	printf("The Sum of the numbers is: %i\n", Calculation);
}













int add(int num1, int num2)
{
	int result;
	
	result = num1 + num2;

	return result;
}
