#include "main.h"
/**
* long_sen - finds the longest word in the sentence
*
* desc: Create a C program that takes a sentence as input
* and finds the longest word in the sentence.
*/

void longsen(char *sentence)
{
  int count = 0, cmp_count = 0, j = 0;
  char *long_sen = NULL;

  for (int i = 0; sentence[i] != '\0'; i++)
  {
    if (sentence[i] == ' ')
    {
      if (count > cmp_count)
      {
        cmp_count = count;
        j = i - count;
        count = 0;
      }
    }
    else
    {
      count++;
    }
  }

  long_sen = malloc(sizeof(char) * (cmp_count + 1));

  int i = 0;
  for (; sentence[j] != ' ' && sentence[j] != '\0'; j++)
  {
    long_sen[i] = sentence[j];
    i++;
  }
  long_sen[i] = '\0';
  printf("The longest word is: %s with %d characters\n", long_sen, cmp_count);

  free(long_sen);
}
