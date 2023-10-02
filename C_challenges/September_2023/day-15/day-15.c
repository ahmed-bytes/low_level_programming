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
  printf("The value of %d in memory is %p\n", *(p + 1), (p + 1));
  printf("The value of %d in memory is %p\n", *(p + 2), (p + 2));
  printf("The value of %d in memory is %p\n", *(p + 3), (p + 3));
  printf("The value of %d in memory is %p\n", *(p + 4), (p + 4));
  printf("The value of %d in memory is %p\n", *(p + 5), &array[5]);

  return 0;
}
