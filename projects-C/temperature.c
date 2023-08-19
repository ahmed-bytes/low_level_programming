#include <stdio.h>
#include <math.h>
/**
 * Main- The entry point of this program
 * desc: To convert c to f or inverse and to tell if the temperature is high or low
 * Return: if 0 then it exited successfully
 */

int main(void)
{
	int temperature;
	float measurement;
	char measureUnit[7], size;

	printf("What is The Temperature: ");
	scanf("%f", &measurement);

	do
	{
		printf("What is the unit: ");
		scanf("%s", &measureUnit[7]);
	}
	while (measureUnit[7] > 7);
	return (0);
}
