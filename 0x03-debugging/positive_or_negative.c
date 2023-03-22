#include "main.h"
/**
 * positive_or_negative -  retrun positive or negative number
 * @i: character to follow
 * Return: always zero
 */


void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative", i);
	else
		printf("%d is positive", i);
}
