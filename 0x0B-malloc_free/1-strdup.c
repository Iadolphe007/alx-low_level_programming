#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - eturns a pointer to a newly allocated space in memory
 * @str: string parameters
 * Return: duplicate string
 */


char *_strdup(char *str)
{
	int len;
	char *new_string;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);

	new_string = (char *)malloc((len) * sizeof(char));

	if (new_string == NULL)
	{
		return (NULL);
	}
	memcpy(new_string, str, len);
	return (new_string);
}
