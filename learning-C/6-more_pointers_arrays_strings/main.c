#include "main.h"
#include <stdio.h>

int main(void)
{
  char *words;

  /*first_str = malloc(sizeof(char) * 32);
  second_str = malloc(sizeof(char) * 32);*/
  words = malloc(sizeof(char) * 300);

  if (/*check_string(first_str) == 1 || check_string(second_str) == 1 || */(check_string(words)) == 1)
  {
    printf("....\n");
    return 1;
  }

  printf("Enter the words to find: ");
  scanf("%[^\n]s", words);
  longsen(words);

  char sentence[] = "The quick lightorange fox";
  longsen(sentence);

  free(words);
  return (0);
}