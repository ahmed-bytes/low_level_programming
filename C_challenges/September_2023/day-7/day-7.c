#include <stdio.h>
/**
* main- Entry point if the program
* desc: Prints the average numbers in an array
* Return: 0 means the program ran and exited successfully
*/

int main(void)
{
  int size, sum = 0, divide;
  float result;

  printf("Enter the size of the array: ");
  scanf("%d", &size);

  int arr[size];
  
  printf("Enter %d numbers: ", size);
  for (int i = 0; i < size; i++)
  {
    scanf("%d", &arr[i]);
  }

  for (int j = 0; j < size; j++)
  {
    if (arr[j] >= 1)
    {
      sum += arr[j];
      divide++;
    }
  }

  result = sum / (float)divide;

  printf("The average numbers for all the positive numbers are: %.1f\n", result);
}
