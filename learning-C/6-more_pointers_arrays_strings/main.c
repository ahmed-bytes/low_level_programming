#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char *first_str;
  char *second_str;

  first_str = malloc(sizeof(char) * 32);
  second_str = malloc(sizeof(char) * 32);

  if (check_string(first_str) == 1 || check_string(second_str) == 1)
  {
    printf("....\n");
    return 1;
  }

  printf("Enter First Name: ");
  scanf("%s", first_str);

  printf("Enter Second Name: ");
  scanf("%s", second_str);

  printf("%s + %s = ", first_str, second_str);
  catstr(first_str, second_str);

  free(first_str);
  free(second_str);
  return (0);
}
