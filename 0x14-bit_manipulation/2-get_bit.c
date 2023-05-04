#include <stdio.h>
#include "main.h"

/**
 * get_bit - print int a given index
 * @index: index to print
 * @n: parameter
 * Returns: the value of the bit at index
 */


int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num;

	if ((size_t)index >= sizeof(unsigned long int) * 8)
		return (-1);
	num = 1UL << index;
	return ((n & num) >> index);
}
