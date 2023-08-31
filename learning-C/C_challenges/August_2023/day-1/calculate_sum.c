#include "main.h"
#include <stdio.h>

/**
 * calculateSum- entry point of the program that
 * sums the elements in the array
 * @arr: the parameter for the array
 * size: the parameter for the size of the array
 * Return: returns the total sum of the array
*/

int calculateSum(int arr[], int size)
{
  int result = 0;

  for (int i = 0; i < size; i++)
  {
    result += arr[i];
  }

  return result;
}
