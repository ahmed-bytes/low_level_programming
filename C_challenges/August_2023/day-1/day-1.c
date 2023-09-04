#include <stdio.h>
/**
* main- The Entry pont for this program
* desc: converts binary to decimal
* Return: 0 means ran and exited sucessfully
*/

int main(void)
{
  int bin_num, rem, base = 1, decimal, duplicate;

  printf("Enter the binary number: ");
  scanf("%d", &bin_num);
  duplicate = bin_num;

  while (bin_num != 0)
  {
    rem = bin_num % 10;
    decimal = decimal + (base * rem);
    base *= 2;
    bin_num /= 10;
  }

  printf("The decimal number for %d is %d\n", duplicate, decimal);

  return (0);
}
