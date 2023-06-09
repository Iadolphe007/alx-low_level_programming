#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_to_uint - convert binary number into unsigned int
 * Return: converted number
 * @b: string character
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int conv_num = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		conv_num = conv_num * 2 + (*b - '0');
		b++;
	}
	return (conv_num);
}
