#include <stdio.h>

int fact(int a);

int main(void)
{
 int result;
  int n;

  printf("Enter the number to factorize: ");
  scanf("%d", &n);

  result = fact(n);

  printf("The factorial of %d is %d\n", n, result);

  return (0);
}

int fact(int a)
{
  if (a == 0)
  {
    return (1);
  }
  else
  {
    return (a * fact(a - 1));
  }
}
