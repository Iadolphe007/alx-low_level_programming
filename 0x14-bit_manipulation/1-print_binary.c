#include "main.h"
#include <stdio.h>

/**
 * print_binary - represent binary
 * @n: paramter
 */

void print_binary(unsigned long int n)
{
	unsigned long int num;
	int bit, i;

	bit = sizeof(unsigned long int) * 8;
	num = 1UL << (bit - 1);

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while ((n & num) == 0 && bit > 1)
	{
		num >>= 1;
		bit--;
	}
	for (i = 0; i < bit; i++)
	{
		_putchar((n & num) ? '1' : '0');
		num >>=1;
	}
}
