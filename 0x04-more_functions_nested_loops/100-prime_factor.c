#include "main.h"
#include <stdio.h>

/**
 * main - printing largest prime factor
 * Return: always 0
 */

int main(void)
{
	long x;
	long maxf;
	long number;
	double square = sqrt(number);

	number = 612852475143;

	for (x = 1; x <= square; x++)
	{
		if (number % x == 0)
			maxf = number / x;
	}
	printf("%ld\n", maxf);
	return (0);
}
