#include "main.h"

/**
 * _strcat - concatonate 2 sring
 * @dest: destiniation string
 * @src: source string
 * Return: estination string
 */


char *_strcat(char *dest, char *src)
{
	char destlen;
	char srclen;
	int i;

	destlen = 0;
	srclen = 0;

	for (i = 0; dest[i] != '\0'; i++)
		destlen++;
	for (i = 0; src[i] != '\0'; i++)
		srclen++;
	for (i = 0; i <= srclen; i++)
		dest[destlen + i] = src[i];
	return (dest);

}
