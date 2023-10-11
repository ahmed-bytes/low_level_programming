#include <stdio.h>
/**
* main- Entry point of this program
* desc: Swaps two numbers using two variables
* Return: 0 means program ran and exited successfully
*/

int main(void)
{
  int a = 30, b = 40;

  printf("Before Swapping: a = %d, b = %d\n", a, b);

  a = a ^ b;
  b = a ^ b;
  a = a ^ b;

  printf("After Swapping: a = %d, b = %d\n", a, b);

  return (0);

}
