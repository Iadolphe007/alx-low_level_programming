#include "main.h"
#include <stdio.h>
/*
 * _isupper - check for upper or lower case letter
 * Return: 1 for upper and 0 for lower case letter
 * @c: character to operate
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);

	else
		return (0);

}
