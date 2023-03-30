#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * rot13 - encoding function
 * @str: string to encode
 * Return: encoded string
 */



char *rot13(char *str)
{
	char i;

	while (*str)
	{
		i = *str;

		if (isalpha(i))
		{
			if ((i >= 'a' && i <= 'm') || (i >= 'A' && i <= 'M'))
			{
				*str = i + 13;
			}
			else
				*str = i - 13;
		}
		str++;
	}
	return (str);
}
