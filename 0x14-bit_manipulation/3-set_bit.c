#include <stdio.h>
#include "main.h"
/**
 * set_bit - sets the value of a bit bat index
 * @n: first parameter
 * @index: position to set value
 * Return: 1 on success or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	 *n |= (1UL << index);
	return (1);
}
