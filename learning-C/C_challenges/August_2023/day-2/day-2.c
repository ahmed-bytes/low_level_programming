#include <stdio.h>
/**
* main- Entry point of this program that outputs the most occuring number
* Return: 0 means the program ran and evited successfully
*/

int main(void)
{
  int size;

  printf("Enter the size of the numbers: ");
  scanf("%d", &size);
  int arr[size];

  int check = 0;
  while (check < size)
  {
    if (scanf("%d", &arr[check])== 1)
    {
      check++;
    }
    else 
  {
      break;
    }
  }

  for (int i = 0; i < size; i++)
  {
    printf("%d", arr[i]);
  }

  printf("\n");

  return (0);
}
