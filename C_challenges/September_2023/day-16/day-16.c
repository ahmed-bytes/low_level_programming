#include <stdio.h>
#include <cs50.h>

int factorial(int n);

int main(void)
{
  int number;

  number = get_int("What is the number to factorize: ");

  int result;

  result = factorial(number);

  printf("The factorial of %d is %d\n", number, result);

  return 0;
}

int factorial(int n)
{
  if (n <= 1)
  {
    return 1;
  }
  else
  {
    return(n * factorial(n - 1));
  }
}
