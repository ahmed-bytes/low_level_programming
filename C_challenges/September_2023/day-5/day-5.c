#include <stdio.h>

/**
* main- Entry point of this program
* desc: Implement array reversal using pointers
* Return: 0 means program ran and exited successfully
*/

int main(void)
{
  int size;

  printf("Enter Size of array: ");
  scanf("%d", &size);
  int arr[size];

  printf("Enter the numbers: ");
  for (int i; i < size; i++)
  {
    scanf("%d", &arr[i]);
  }

  int *start, *end, temp;

  *start = arr;
  *end = arr + size - 1;

  while (start < end)
  {
    int temp;

    temp = *start;
    *start = *end;
    *end = temp;

    start++;
    end--;
  }

  for (int j = 0; j < size; j++)
  {
    printf("%d, ", arr[j]);
  }

  printf("\n");

  return (0);
}
