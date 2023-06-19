#include "main.h"
#include "stddef.h"
/**
 * _strchr - locates character in the string
 * @s: string
 * @c: character to locate
 * Return: c else Null
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
