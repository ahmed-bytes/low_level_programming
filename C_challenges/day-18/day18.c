#include <stdio.h>
/**
* Desc - Practice Function pointers
* return : 0 means success else 1 means fail
*/

void add(int a, int b){printf("The sum of %d and %d is %d", a, b, a + b);}
void multiply(int a, int b){printf("The product of %d and %d is %d", a, b, a * b);}

int main(void)
{
  void (*fun_ptr[])(int, int) = {add, multiply};

}
