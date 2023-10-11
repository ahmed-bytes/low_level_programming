#include <stdio.h>

/**
* main- Entry point of the program
* desc: Counts the number of vowels in a string
* Return: 0 means ran and exited successfully
*/

int main(void)
{
  int count;
  char text[100];
  char vowels[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

  printf("Enter the string (up to %d characters): ", 100 - 1);
  fgets(text, sizeof(text), stdin);

  for (int i = 0; i < 100; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      if (text[i] == vowels[j])
      {
        count++;
      }
    }
  }

  printf("There are %d vowels in this text\n", count);

  return (0);
}
