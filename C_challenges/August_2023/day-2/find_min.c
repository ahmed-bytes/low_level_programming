#include "main.h"
#include <stdio.h>

/**
 * findMin- entry point of the program that
 * finds the minimum value in the array
 * @arr: the parameter for the array
 * size: the parameter for the size of the array
 * Return: gives out the minimum or lowest value
*/

int findMin(int arr[], int size)
{
  int result = arr[size - 1];

  for (int i = 0; i < size; i++)
  {
    if (arr[i] < result)
    {
      result = arr[i];
    }
  }

  return result;
}
