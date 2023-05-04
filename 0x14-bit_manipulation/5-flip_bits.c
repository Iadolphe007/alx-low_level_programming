#include "main.h"

/**
 * flip_bits - flip from one number to another
 * @n: first parament
 * @m: second param
 * Return: count
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m;
	unsigned int count = 0;

	while (i)
	{
		count += i & 1;
		i >>= 1;
	}
	return (count);
}
