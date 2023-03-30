#include "main.h"
/**
 * leet - leet encoding
 * @str: string to be encoded
 * Return: encoded string
 */


char *leet(char *str)
{
	int i;
	int j;
	char *x = "aAeEoOtTlL";
	char *y = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; x[j] != '\0'; j++)
		{
			if (str[i] == x[j])
			{
				str[i] = y[j];
			}
		}
	}
	return (str);
}
