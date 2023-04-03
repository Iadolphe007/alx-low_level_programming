#include "main.h"
#include <stddef.h>

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: always 0 (seccess)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		
		char *i = haystack;
		char *p = needle;

		while (*i == *p && *p != '\0')
		{
			i++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (NULL);
}
