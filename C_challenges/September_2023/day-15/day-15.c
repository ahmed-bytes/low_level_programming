#include <stdio.h>
/**
* main- Prints the memory address of some values in array
* Return: 0 means success
*/

int main(void)
{
  int array[] = {1, 3, 4, 6, 4, 2, 4};
  int *p = array;

  printf("The value of %d in memory is %p\n", *p, p);
  printf("The value of %d in memory is %p\n", *(p + 1), &(p + 1));

  return 0;
}
