#include <stdio.h>
#include <string.h>

/**
 * puts_half - printingg half of string
 * @str: parameter
 */

void puts_half(char *str)
{
	int length;
	int half_length;
	int i;


	length = strlen(str);
	half_length = length / 2;
	for (i = half_length; i < length; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
