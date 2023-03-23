#include <stdio.h>
#include "main.h"

/**
 * more_numbers - printing number lines
 */


void more_numbers(void)
{
	int i;
	int j;

	j = 0;

	while (j < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
		j++;
	}
	_putchar('\n');
}
