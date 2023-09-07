#include <stdio.h>
/**
* main- Entry point of the program
* desc: Convert Celcius to Fahrenheit
* Return: 0 means ran and exited successfully
*/

int main(void)
{
  float temp;
  float fahren;

  printf("Enter temperature in celcius: ");
  scanf("%f", &temp);

  fahren = (temp * 1.8) + 32;

  printf("The temperature in Fahrenheit is: %.2f\n", fahren);

  return (0);
}
