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
	char *p = str;
	char i;


	while (*P != '\0')
	{
		i = *p;

		if (i >= 'a' && i <= 'z')
		{
			i = ((i - 'a' + 13) % 26) + 'a';
		}
		else if (i >= 'A' && i <= 'z')
		{
			i = ((i - 'A' + 13) % 26) + 'A';
		}
		*p = i;
		p++;
	}
	return (str);
}
