#include <stdio.h>
/**
* main- Entry Point of this program
* desc: Generates The Finobacci sequence of numbers
* Return: 0 means Program ran and exited succesfully
*/

int main(void)
{
  int size, t1 = 0, t2 = 1;
  int sum = t1 + t2;

  printf("Enter The number of Finobacci numbers to generate: ");
  scanf("%d", &size);

  printf("The Finobacci series are: %d, %d, ", t1, t2);

  for (int i = 3; i <= size; i++)
  {
    printf("%d, ", sum);
    t1 = t2;
    t2 = sum;
    sum = t1 + t2;
  }

  printf("\n");

  return (0);
}
