#include "main.h"


char *_strncat(char *dest, char *src, int n)
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
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[destlen + i] = src[i];
	return (dest);	
}
