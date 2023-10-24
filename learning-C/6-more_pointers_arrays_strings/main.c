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
  fgets(words, sizeof(words), stdin);
  longsen(words);

  char sentence[] = "The quick brown fox jumps over the lazy dog";
  longsen(sentence);

  free(words);
  return (0);
}
