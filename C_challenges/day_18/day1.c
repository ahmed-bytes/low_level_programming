#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* main - Concatenate two strings from the cli arguement
* Return: 0 means ran and exited successfully else 1 error
*/
int main(int argc, char *argv[])
{
  if (argc != 3)
  {
    printf("Require two string to concatenate!!\n");
    return 1;
  }

  char *combined;
  int i, j, length = strlen(argv[1]) + strlen(argv[2]);


  combined = malloc(sizeof(char) * (length + 1));
  if (combined == NULL)
  {
    printf("Not able to assign Memory!!\n");
    return 2;
  }

  i = 0;
  while (argv[1][i] != '\0')
  {
    combined[i] = argv[1][i];
    i++;
  }
  j = 0;
  while (argv[2][j] != '\0')
  {
    combined[i] = argv[2][j];
    i++;
    j++;
  }
  combined[length] = '\0';

  printf("The concatenated string is: %s\n", combined);
  free(combined);

  return (0);
}
