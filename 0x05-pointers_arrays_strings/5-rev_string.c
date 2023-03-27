#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string -  strinig returning the reverse
 * @s: string to be reverse
 */

void rev_string(char *s)
{
	int i;
	int j;
	char temp;

	j = strlen(s) - 1;
	for (i = 0; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;

	}
}
