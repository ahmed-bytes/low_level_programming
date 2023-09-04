#include "main.h"
#include <stdio.h>
/**
 * findMax- A function that finds the max value of an array
 * @arr: The parameter for the array
 * @size: The parameter for the size of the array
 * Return: give out the maximum or highest value
 */

int findMax(int arr[], int size)
{
  int check = 0;

  for (int i = 0; i < size; i++)
  {
    if (check < arr[i])
    {
      check = arr[i];
    }

  }

  return (check);
}
