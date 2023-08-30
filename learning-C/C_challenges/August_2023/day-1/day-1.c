#include <stdio.h>
#include "main.h"
/**
* Main- The entry point of the program that finds
* The Maximum, Minimum and Total numbers inputted
* Return: 0 means it ran and exited successfully
*/

int main(void)
{
  /* Prompts the user for size of the array and stores it in a variable */
  int size, num;

  printf("How many Numbers are you entering: ");
  scanf("%d", &size);

  /* Prompts the user for the numbers and stores in an array */
  int arr[size];

  for (int i = 0; i < size; i++)
  {
    printf("Enter The number: ");
    scanf("%d", &arr[i]);
  }

  /* finds the maximum and minimum number in the array */
  int result_max = findMax(arr, size);

  /* find the sum and prints out the numbers in the array */

  printf("The Maximum Number is: %d\n", result_max);

  return (0);
}
