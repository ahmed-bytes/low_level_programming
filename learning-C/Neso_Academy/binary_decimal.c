#include <stdio.h>
/**
* Main- A program that converts binary numbers
* to decimal numbers
* return: 0 means ran and exited successfully
*/

int convert(int bin);

int main(void)
{
  int binary_number, result;

  printf("Enter Binary Number: ");
  scanf("%d", &binary_number);

  result = convert(binary_number);

  printf("The number %d in decimal is %d\n", binary_number, result);

  return (0);
}




int convert(int bin)
{
  int decimal = 0;
  int base = 1;

  while (bin != 0)
  {
    int rem;

    rem = bin % 10;
    decimal += (rem * base);
    bin /= 10;
    base *= 2;
  }

  return (decimal);
}
