#include <stdio.h>
/**
* main - Entry point of the program
* desc: Counting the occurences of a word
* Return: 0 means program ran and exited successfully
*/

int main(void)
{
  char arr [100];
  char word;
  int count = 0, check;

  printf("Enter Text: ");
  fgets(arr, sizeof(arr), stdin);

  printf("Enter the character to find its occurence: ");
  word = getchar();

  check = 0;
  while (check < 100)
  {
    if (arr[check] == word)
    {
      count++;
    }
    check++;
  }
  printf(" '%c' occurs %d times in this text \n", word, count++);

  return (0);
}
