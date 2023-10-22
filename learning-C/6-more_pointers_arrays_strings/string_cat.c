#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* catstr - that takes two strings as input and concatenates them
* @first: first string to join
* @second: second string to join
*
* desc: Write a C program that takes two strings as input and concatenates them 
* to create a new string. 
* Use pointers to manipulate the strings.
*/

void catstr(char *first, char *second)
{
  if (first == NULL || second == NULL)
  {
    printf("NULL");
  }
  else
  {
    char *joint;
    int i, tmp;

    joint = malloc(sizeof(char) * 32);

    if (check_string(joint) == 1)
    {
      printf("NULL");
    }

    i = 0;
    while (first[i] != '\0')
    {
      joint[i] = first[i];
      i++;
    }

    tmp = 0;
    while (second[tmp] != '\0')
    {
      joint[i] = second[tmp];
      tmp++;
      i++;
    }

    printf("Good Morning %s %d\n", joint, i);
    free(joint);
  }

}
