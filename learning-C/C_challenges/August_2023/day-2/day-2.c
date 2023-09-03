#include <stdio.h>
/**
* main- Entry point of this program that outputs the most occuring number
* Return: 0 means the program ran and evited successfully
*/

int main(void)
{
  int size, check, count = 1, check2;

  printf("Enter the size of the numbers: ");
  scanf("%d", &size);
  int arr[size];

  printf("Enter numbers: ");

  check = 0;
  while (check < size)
  {
    if (scanf("%d", &arr[check]) == 1)
    {
      check++;
    }
    else
    {
      printf("Enter a reasonable number\n");
    }
  }

  check2 = arr[0];

  for (int i = 1; i < size; i++)
  {
    if (check2 == arr[i])
    {
      count++;
    }
    else
    {
      count--;
    }

    if (count == 0)
    {
      check2 = arr[i];
      count = 1;
    }
  }

  count = 0;

  for (int j = 0; j < size; j++)
  {
    if (arr[j] == check2)
    {
      count++;
    }
  }

  if (count > size / 2)
  {
    printf("The Majority Element is: %d", check2);
  }
  else
  {
    printf("There's no majority element\n");
  }

  printf("\n");

  return (0);
}
