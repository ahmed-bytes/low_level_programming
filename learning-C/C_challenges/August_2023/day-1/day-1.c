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
  int result_max, result_min, sum_elements;

  result_max = findMax(arr, size);
  result_min = findMin(arr, size);

  /* find the sum of the numbers */ 
  sum_elements = calculateSum(arr, size);

  /* outputs the results */
  printf("\t\t\t*****************************\n");
  printf("\t\t\tThe Maximum Number is: %d\n", result_max);
  printf("\t\t\tThe Minimum Number is: %d\n", result_min);
  printf("\t\t\tSum of all Elements is: %d\n", sum_elements);
  printArray(arr, size);
  printf("\t\t\t*****************************\n");

  return (0);
}
