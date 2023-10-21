#include <stdio.h>
/**
 * desc: Write a C program to convert specified days 
 * into years, weeks and days
 */
int main(void)
{
	int days, weeks, years;

	days = 7;
	
	years = days / 365;

	weeks = (days % 365) / 7;

	days = days - ((years * 365) + (weeks * 7));

	printf("Days = %d\nWeeks = %d\nYears = %d\n", days, weeks, years);
	return (0);
}
