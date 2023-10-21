#include <stdio.h>
#include <stdlib.h>

typedef struct node *nodeptr;

struct node
{
  int num_data;
  nodeptr next;
};

typedef struct node node;

int main(int argc, char **argv)
{
  nodeptr first = NULL;

  first = malloc(sizeof(node));
  first->next = NULL;

  first->num_data = 61;
  first->next = malloc(sizeof(node));

  nodeptr temp = malloc(sizeof(node));
  temp->next = first;
  first = temp;

  printf("Hello World\n");
  return 0;
}
