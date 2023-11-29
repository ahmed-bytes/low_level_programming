#include "main.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	char *name;
	int age;
}
data;

int main(void)
{
	data student;

	student.name = malloc(sizeof(char) * 4);

	printf("Enter Name: ");
	scanf("%s", student.name);
	printf("Age: ");
	scanf("%d", &student.age);
	printf("%s : %d\n", student.name, student.age);
	printf("%ld\n", sizeof(student));
	free(student.name);
	return (0);
}
