#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatonate strings
 * @s1: dest
 * @s2: source
 * @n: bytes to copy
 * Return: result
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t len1, len2, len;
	char *result;

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (len2 < n)
		len = len1 + len2;
	else
		len = len1 + n;

	result = malloc(len + 1);

	if (result == NULL)
		return (NULL);

	strncpy(result, s1, len1);
	if (len2 < n)
		strncpy(result + len1, s2, len2);
	else
		strncpy(result + len1, s2, n);

	result[len] = '\0';

	return (result);
}
