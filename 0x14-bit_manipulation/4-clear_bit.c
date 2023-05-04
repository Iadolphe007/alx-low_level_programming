#include <stdio.h>
#include "main.h"

/**
 * clear_bit - st value to 0
 * @index: position
 * @n: parameter
 * Return: 1 on success or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}
