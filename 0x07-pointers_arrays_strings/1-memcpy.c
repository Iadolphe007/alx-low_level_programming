#include "main.h"

/**
 * _memcpy - copy from src to dest
 * @n: number of bytes to be copied
 * @src: copy source
 * @dest: destination
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
