#include "main.h"

/**
 * get_endianness - checks the endianness.
 * Return: 0
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *p = (char *)&x;

	if (*p == 1)
		return (1);
	return (0);
}
