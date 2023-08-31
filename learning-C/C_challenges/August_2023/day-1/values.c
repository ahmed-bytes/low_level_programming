#include "main.h"
#include <stdio.h>

/**
 * printArray- entry point of the program that
 * prints out all the value in the array
 * @arr: the parameter for the array
 * size: the parameter for the size of the array
*/

void printArray(int arr[], int size)
{
  printf("\t\t\tThe values are: ");
  for (int i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}
