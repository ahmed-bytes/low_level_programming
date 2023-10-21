#include <stdio.h>
/**
 *  Write a C program to convert a given integer (in seconds) 
 *  to hours, minutes and seconds.
 */

int main(void)
{
	int hours = 3600;
	int minutes = 60;
	int seconds;

	printf("Input seconds: ");
	scanf("%d", &seconds);
	hours = seconds / hours;
	minutes = (seconds % hours) / minutes;
	seconds = seconds - (hours * seconds) + (minutes * seconds);
	printf("H:M:S = %d:%d:%d\n", hours, minutes, seconds);

	return (0);
}
