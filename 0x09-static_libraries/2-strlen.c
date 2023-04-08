#include "main.h"

/**
 * _strlen - function returning the length of the string
 * @s: input which return the length of the string as an integer
 * Return: length of a string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
