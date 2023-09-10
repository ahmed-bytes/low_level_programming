#include <stdio.h>

int fib(int a);

int main(void)
{
  int n, result;

  printf("Enter the nth term: ");
  scanf("%d", &n);

  result = fib(n);

  printf("The %d term in the finobacci sequence is: %d", n, result);

  return (0);
}


int fib(int a)
{
  if (a >= 3)
  {
    return (fib(n-1) + fib(n-2));
  }
  else
  {
    return 1; 
  }
}
