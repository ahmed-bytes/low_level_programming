/**
 * Finobaaci Sequence: Each number is the sum of two preceding ones
 * Author: Oladapo Opeyemi
 */

#include <stdio.h>

int main(void)
{
	int firstNum = 0;
	int secondNum = 1;

	for (int thirdNum = 0; thirdNum <= 100; thirdNum++)
	{
		thirdNum = thirdNum - firstNum + thirdNum - secondNum;

		printf("%d\n", thirdNum);
	}
	return 0;
}
