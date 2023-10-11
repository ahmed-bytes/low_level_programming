#include <stdio.h>
#include <cs50.h>
/**
 * main - The entry point of this program
 * desc:
 * Return: 0 means ran and exited successfully
 */

typedef struct
{
  string name;
  int votes;
}
candidate;


candidate get_candidate(string prompt);


int main(void)
{
  candidate president = get_candidate("Enter a candidate: ");

  printf("Name of Candidate: %s\n", president.name);
  printf("Candidate votes: %i\n", president.votes);
  return 0;
}


candidate get_candidate(string prompt)
{
  printf("%s\n", prompt);

  candidate c;
  c.name = get_string("Enter a name: ");
  c.votes = get_int("Enter votes: ");

  return c;
}
