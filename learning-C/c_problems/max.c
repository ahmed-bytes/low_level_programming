#include <stdio.h>
#include <assert.h>
#include <errno.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
/**
 * a C program that accepts three integers and finds the maximum of three.
 */

int main (void)
{
  int *numbers;
  int size = 11, first_index = size - 1, result;

  numbers = malloc(sizeof(int[size]));

  printf("Enter Numbers <= 10: ");
  scanf("%i", numbers);

  for (int i = 0; i < size; i++)
  {
    if (numbers[i] > numbers[first_index])
    {
      result = i;
    }
    first_index--;
  }
  result = first_index;

  printf("The maximum Number is: %d\n", numbers[result]);

  free(numbers);
}
