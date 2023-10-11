#include <stdio.h>
/**
 * main- The Entry point of this program
 * desc: outputs the indices of two elements that sums to the target value
 * Return: 0 means Program ran and exited successfully
*/

int main(void)
{
  int size, target_value, sum = 0, result;

  printf("What is the size of the number: ");
  scanf("%d", &size);

  int arr[size];

  printf("Enter %d numbers: ", size);
  for (int i = 0; i < size; i++)
  {
    scanf("%d",&arr[i]);
  }

  printf("Enter the target value: ");
  scanf("%d", &target_value);


  for (int j = 1; j < size; j++)
  {
    result = arr[sum] + arr[j];

    if (result == target_value)
    {
      printf("%d, %d\n", sum, j);
    }
    else 
    {
      sum++;
    }
  }

  return (0);
}
