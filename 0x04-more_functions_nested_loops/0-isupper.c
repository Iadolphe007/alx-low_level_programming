#include "main.h"
#include <stdio.h>

/**
 * _isupper - return upper and lowecase letter
 *
 * @c: charcter argment
 * Return: 1 for uppercase and 0 for lowercase
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);

	else
		return (0);

}
