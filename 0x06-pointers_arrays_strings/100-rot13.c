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
	char c;

	while (*str)
	{
		c = *str;
		if (isalpha(c))
		{
			if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
			{
				*str = c + 13;
			}
			else
			{
				*str = c - 13;
			}
		}
		str++;
	}
	return(str);
}
