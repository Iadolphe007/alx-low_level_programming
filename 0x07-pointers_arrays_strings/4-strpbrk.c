#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - search for set of bytes in a string
 * @s: string
 * @accept: input
 * Return: pinters s or null
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return(NULL);
}
